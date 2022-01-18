character *5 ch1,ch2, ch3 * 10
ch1 = "easy"
ch2 = "difficult"
ch3 = ch1//ch2
print 10, ch1, ch2, ch3
ch1 = ch3(6:9)
ch2 = ch3(:5)
print 10, ch1, ch2, ch3
read *
10 format(3a6)
end