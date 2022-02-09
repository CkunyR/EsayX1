#include <stdio.h>
//包含图形库文件
#include <graphics.h>

int main()
{
	//创建窗口
	initgraph(950, 860, SHOWCONSOLE);
	setbkcolor(GREEN);//设置背景颜色
	cleardevice();//清屏
	setfillcolor(BLUE);
	setlinecolor(YELLOW);
	setlinestyle(PS_SOLID, 5);//设置线条样式

	circle(100, 150, 50);
	fillcircle(100, 260, 50);//设置填充颜色
	solidcircle(100, 380, 50);//设置线条颜色
	//绘制文字
	  //设置字体颜色
	settextcolor(YELLOW);
	//参数错误，找不到对应函数；是由于字符集导致的
	// outtextxy(100, 150, "哈哈哈");
	//解决方案
	//1.在字符串前面加上大写L
	//outtextxy(100, 150, L"哈哈哈");
	//2.用TEXT()/_T()将字符串包含在内
	//outtextxy(100, 150, TEXT("哈哈哈"));
	//3.不需要添加任何代码，项目 -> 属性 -> 配置属性 -> 高级 -> 字符集 -> 改为“多字节字符集” --> 推荐使用 <--
	//设置文字样式
	settextstyle(35, 0, "楷体");
	//设置背景模式  TRANS PARENT -> 透明
	setbkmode(TRANSPARENT);
	//设置字体颜色
	settextcolor(RGB(127, 255, 212));
	outtextxy(100, 150, "哈哈哈");
	//把文字居中

	fillrectangle(300, 80, 600, 180);
	settextcolor(RGB(127, 0, 212));
	char arr[] = "哈哈哈";
	int width = 300 / 2 - textwidth(arr) / 2;
	int height = 100 / 2 - textheight(arr) / 2;
    
	outtextxy(width + 300, height + 80, arr);

	getchar();
	//关闭窗口
	closegraph();
	

	return 0;
}