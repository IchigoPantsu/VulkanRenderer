//
//  Fence.h
//
#ifndef RENDERER_FENCE_H
#define RENDERER_FENCE_H
#pragma once
#include <vulkan/vulkan.h>
#include "DeviceContext.h"

/*
====================================================
Fence
====================================================
*/
class Fence {
public:
	Fence( DeviceContext * device ) { Create( device ); m_device = device; }
	~Fence() { Wait( m_device ); }

	VkFence m_vkFence;

private:
	bool Create( DeviceContext * device );
	bool Wait( DeviceContext * device );

	DeviceContext * m_device;
};
#endif//RENDERER_FENCE_H
