!allocatable array
integer n,aver
integer,allocatable :: a(:)
print*,"请输入学生人数"
read*,n
allocate(a(n))
print*,"输入学生成绩:"
do i=1,n
	read*,a(i)
enddo
aver=0
do i=1,n
	aver=aver+a(i)
enddo
aver = aver / n
print *, "aver=",aver
deallocate(a)
read*
end