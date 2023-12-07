#ifndef BOXMK_H
#define BOXMK_H

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void disbox(box);
void mulvolbox(box*);
void runBox();


#endif // !BOX_H
