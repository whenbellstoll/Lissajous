#include "stdafx.h"
#include "Headers.h"

#include "LocalDataFun.h"

MemoryPool CircleLDMemoryPool(sizeof(CircleLD));
DYNCREATEI(CircleLD);
CircleLD::CircleLD()
{
	angle = 0;
	initialangle = 0;

}

void* CircleLD::operator new(size_t size)
{
	return CircleLDMemoryPool.Alloc();
}

void CircleLD::operator delete(void* pVoid)
{
	CircleLDMemoryPool.Free(pVoid);
}

node* CircleLD::Clone()
{
	return new CircleLD(*this);
}

void CircleLD::Save(File& f)
{
	f.Write(angle);
	f.Write(initialangle);

}

void CircleLD::Load(File& f)
{
	f.Read(angle);
	f.Read(initialangle);

}

CircleLD* GetCircleLD(node* This)
{
	return (CircleLD*)This->local;
}

