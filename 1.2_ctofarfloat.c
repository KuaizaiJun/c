#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;  //华氏温度下限
    upper = 300;    //华氏温度上限
    step = 20;  //温度步长

    fahr = lower;   //建议在运算符两边各加上一个空格符
    while (fahr <= upper)   //建议每行只写一条语句
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);  //不能写作5/9, 整数除法执行舍位(小数位)
        printf("%3.0f\t%3.1f\n", fahr, celsius);  //%d指定一个整型参数
        fahr = fahr + step;
    }
}
