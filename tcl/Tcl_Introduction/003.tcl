;# 1．set：给变量赋值，格式为 set var value

set X "This is a string"
set Y 1.24

puts $X
puts $Y

set label "The value in Y is"
puts $label$Y
puts "$label $Y"