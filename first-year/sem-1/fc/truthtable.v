module truthtable(input a,b,c, output x);
  
  //assign x = ((~a)&(~b)&(~c)) | ((~a)&(b)&(~c)) | ((~a)&(b)&(c)) | ((a)&(~b)&(c)) | ((a)&(b)&(~c));
  assign x = ~a&b|~c&~a|~c&b|a&~b&c;
endmodule

module truthtable_tb;
  reg a,b,c;
  wire x;
  
  truthtable nume(.a(a),.b(b),.c(c),.x(x));
  
  reg[3:0] i;
  
  initial begin
    

    for(i=0;i<8;i=i+1) begin
      
      a=i[2];
      b=i[1];
      c=i[0];
      #1;
      $display("a=%b b=%b c=%b x=%d", a,b,c,x);
      
    end
    
  end
endmodule