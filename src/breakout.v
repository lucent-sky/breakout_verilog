module breakout (
    input  wire clk,
    input  wire reset,
    input  wire left,
    input  wire right,
    output reg  [5:0] ball_x,
    output reg  [5:0] ball_y,
    output reg  [5:0] paddle_x
);

    // Signed horizontal velocity: -2 .. +2
    reg signed [2:0] vx;
    reg dy;  // 0 = up, 1 = down

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            ball_x   <= 20;
            ball_y   <= 10;
            paddle_x <= 17;
            vx       <= 1;
            dy       <= 1;
        end else begin
            // ---- Ball movement ----
            ball_x <= ball_x + {{3{vx[2]}}, vx};
            if (dy) ball_y <= ball_y + 1;
            else    ball_y <= ball_y - 1;

            // ---- Wall collisions ----
            if (ball_x <= 1)  vx <=  2;
            if (ball_x >= 38) vx <= -2;
            if (ball_y == 0)  dy <= 1;

            // ---- Paddle movement ----
            if (left && paddle_x > 0)
                paddle_x <= paddle_x - 1;
            else if (right && paddle_x < 34)
                paddle_x <= paddle_x + 1;

            // ---- Paddle collision with angle control ----
            if (ball_y == 19 &&
                ball_x >= paddle_x &&
                ball_x <  paddle_x + 6) begin

                dy <= 0; // bounce upward

                case (ball_x - paddle_x)
                    0: vx <= -2;
                    1: vx <= -1;
                    2: vx <=  0;
                    3: vx <=  0;
                    4: vx <=  1;
                    5: vx <=  2;
                    default: vx <= vx;
                endcase
            end
        end
    end

endmodule
