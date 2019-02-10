#ifndef _LOCALDATA_H_
#define _LOCALDATA_H_

class CircleLD : public node
{
public:
	CircleLD();
	void* operator new(size_t);
	void operator delete(void*);
	node* Clone();
	void Save(File&);
	void Load(File&);

	int angle;
	int initialangle;
	DYNCREATED
};
extern CircleLD* GetCircleLD(node* This);

#endif // _LOCALDATA_H
