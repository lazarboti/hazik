`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:42:23 03/14/2024 
// Design Name: 
// Module Name:    alap 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alap(input[3:0] sw, output[6:0] a_to_g ,
output [3:0] an,output dp
    );

assign an= 4'b0000;
assign dp=1;

hex7seg D4(.x(sw),.a_to_g(a_to_g));

endmodule
