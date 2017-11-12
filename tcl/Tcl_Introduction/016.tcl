;#------------------------------------------------------------------------------
;#
;#
;#------------------------------------------------------------------------------

proc traverse {alist} {
	set i 0
	
	foreach j $alist {
		puts "alist\[$i\] = $j"
		incr i
	}
	
	puts "-----------------------------"
}

;# alist[0] = a
;# alist[1] = b
;# alist[2] = c d e
;# alist[3] = f {g h}
;# -----------------------------
set b [list a b {c d e} {f {g h}}]
traverse $b

;# alist[0] = a
;# alist[1] = b
;# alist[2] = {c
;# alist[3] = d
;# alist[4] = e}
;# alist[5] = {f
;# alist[6] = {g
;# alist[7] = h}}
;# -----------------------------
set b [split "a b {c d e} {f {g h}}"]
traverse $b

;# a b c d e f {g h}
;# alist[0] = a
;# alist[1] = b
;# alist[2] = c
;# alist[3] = d
;# alist[4] = e
;# alist[5] = f
;# alist[6] = g h
;# -----------------------------
;#
;# 【注意】concat去掉了第一层花括号,输出：a b c d e f {g h}
;# -----------------------------
set a [concat a b {c d e} {f {g h}}]
puts $a
traverse $a