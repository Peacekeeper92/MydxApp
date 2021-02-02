#pragma once

#include<Mydx.h>

using namespace Mydx;

class Engine
{
	Hardware* mHardware;
	IDXGISwapChain* mSwapChain;

public:
	Engine(HWND hwnd, HINSTANCE hInstance);
	~Engine();

	void Init();
	void Update(float Delta);
	void Render(float Delta);
	void Release();
};
