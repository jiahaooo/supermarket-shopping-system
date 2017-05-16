#ifndef  __TUXING_H__
#define  __TUXING_H__

#define SVGA_COPY 0  //����
#define SVGA_XOR  1  //���
#define SVGA_OR   2  //��
#define SVGA_AND  3  //��
#define SVGA_NOT  4  //��
void setsvga(void);//����svgaģʽ 
void selectpage(register char page);
void SvgaSetWriteMode(int mode);
unsigned int get16color(long int x);//�����ϵõ�0xffffff��ʽ��r8g8b8��ɫ����ʾΪ0xffff��ʽ��r5g6b5��ʽ 
void CLOSE_SVGA(void);

void drawpoint(int x,int y,unsigned int color);//���� 
void drawbkcolor(int unsigned color);//���ñ���ɫ 
void drawbar(int left,int top,int right,int bottom,unsigned int color);//�����Σ����ϣ��ң��£���ɫ 
void heng_line(int x1,int x2,int y,unsigned int color);//������ ���ң������꣬��ɫ 
void shu_line(int x,int y1,int y2,unsigned int color);//������ �����꣬�ϣ��£���ɫ 
void drawline(int x1,int y1,int x2,int y2,unsigned int color);//���ߣ���һ���㣬�ڶ����㣬��ɫ 
int drawcircle(int x,int y,int r,unsigned int color,int flag);//��Բ Բ��λ�ã��뾶����ɫ���Ƿ�ʵ�� 
int drawellipse(int x,int y,int a,int b,unsigned int color,int flag);//����Բ Բ��λ�ã�x����뾶��y����뾶����ɫ���Ƿ�ʵ�� 
void drawbarcir(int left,int top,int right,int bottom,int r,unsigned int color,int flag);//��Բ�Ǿ��Σ����ϣ��ң��£��뾶����ɫ���Ƿ�ʵ�ģ�����㷨Ҫ���ˡ����� 
 
void put_asc(int cx,int cy,int xsize,int ysize,char *s,unsigned int color );//�����ַ����� λ�ã�x�����С��y�����С���ַ�������ɫ 
void Put_Asc16_Size(int cx,int cy,int xsize,int ysize,char key,unsigned int fcolor);
void Put_Asc16(int cx,int cy,char key,unsigned int fcolor);
void Read_Asc16(char key,unsigned char *buf);


#endif