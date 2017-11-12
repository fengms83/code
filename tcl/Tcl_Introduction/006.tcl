;# 1． [ ] 可以传递其中的命令结果，注意不能被 {} 包含；
;# 2．双引号包含的 [ ] 中的命令可以正常执行，命令结果也可以传出；
;# 3．{} 包含的 [ ] 中的命令不会执行，更不会有命令结果传出来。

set X "abc"
puts "A simple substitution: $X \n"

set y [set x "def"]	
puts "Remember that set returns the new value of the variables:X:$x  Y:$y\n"

set z {[set x "This is a string within quotes within braces"]}
puts "Note the curly braces:$z\n"

set a "[set x {This is a string within braces within quotes}]"
puts "See how the set is executed:$a"
puts "\$x: $x\n"

set b "\[set y {This is a string within braces within quotes}]"
puts "Note the \\ escapes the bracket:\n \$b is: $b"
puts "\$y is: $y"