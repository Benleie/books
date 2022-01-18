




parameter (n=3)
dimension name(n),s(n)
character name *10
open(1,file="stu1.md")
do i=1,n
    read(1,20) name(i),s(i)
enddo
20 format(a,f5.1)
close(1)

open(2,file="stu2.md")
do i=1,n
    if(s(i) >= 60) write(2,20) name(i), s(i)
enddo
close(2)
end














!A.屏幕输入数据
parameter (n=3)
dimension name(n),s(n)
character name *10
open(1,file="stu1.md")
do i=1,n
    print*,"请输入姓名和成绩(小数):"
    read*,name(i),s(i)
   write(1,20) name(i),s(i)
enddo
20 format(a,f5.1)
close(1)
read*
end






