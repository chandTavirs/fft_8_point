a = cos(2*pi/8); % your float point number
n = 8;         % number bits for integer part of your number      
m = 8;         % number bits for fraction part of your number
% binary number
d2b = [ fix(rem(fix(a)*pow2(-(n-1):0),2)), fix(rem( rem(a,1)*pow2(1:m),2))];  % 