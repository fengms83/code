set X 100
set Y 256


set Z [expr "$Y + $X"]
set Z_LABEL "$Y plus $X is "
puts "$Z_LABEL $Z"

set Z [expr $Y + $X]
set Z_LABEL "$Y plus $X is "
puts "$Z_LABEL $Z"

puts "The square root of $Y is [expr sqrt($Y)]\n"

puts "\"5+-3*4\" is [expr 5+-3*4]"
puts "\"(5+-3)*4\" is [expr (5+-3)*4]"

puts "\n................. more examples of differences between  \" and \{"


puts {$Z_LABEL [expr $Y +$X]}		;# 外层是花括号不会进行置换
puts "$Z_LABEL [expr $Y +$X]"		;# 外层是双引号会进行置换


