#pragma once
#ifndef CGAME_H
#define CGAME_H

#include <direct.h>
#include <wrl\module.h>

using namespace Microsoft::WRL;
using namespace Windows::UI::Core;

class CGame {
public:
	ComPtr<ID3D12Device1> dev;
	//ComPtr<ID3D12DeviceContext1> devcon;

	void Initialize();
	void Update();
	void Render();
};

#endif