# -*- coding:utf-8 -*-

import re

def main():
	result = True

	# 表示时间的模式
	pattern = '\d+:\d+'
	pattern = '(0?[0-9]|1[0-9]|2[0-3]):([0-5][0-9])'
	
	with open('time.txt', 'r') as f:
		for line in f.readlines():
			line = line.strip()

			if re.search('pass', line, re.I):
				expected = True
				continue

			elif re.search('failed', line, re.I):
				expected = False
				continue

			elif len(line) == 0:
				continue

			m = re.match(pattern, line)

			# 预期是合法时间，却判断出错，则测试用例出错
			if expected:
				if not m:
					result = False
					print '[Failed]%s\t: is legal, test as illegal'%line
				else:
					print '[Passed]%s\t: is legal'%line
			else:
				if m:
					result = False
					print '[Failed]%s\t: is illegal, test as legal'%line
				else:
					print '[Passed]%s\t: is illegal'%line

	return result
	
if __name__ == '__main__':
	assert(True == main())