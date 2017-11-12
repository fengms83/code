;# 1．最外层是 {} 则不会进行置换操作，但其中的续行符仍然有效

set Z "Albany"
set Z_LABEL "The capital of New York is:"

;# 双引号中间出现双引号，内部双引号前必须有\ 进行转义
puts "\n......examples of differences between \" and \{"

puts "$Z_LABEL $Z"

;# 最外层是 {} 则不会进行置换操作，但其中的续行符仍然有效
puts {$Z_LABEL $Z}

puts {There are no substitutions done within braces \n \r \x0a \f \v}

puts {But, the escaped newline at the end of a\
			string is still evaluated as a space}