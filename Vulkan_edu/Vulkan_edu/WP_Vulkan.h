#include<vulkan\vulkan.h>
#pragma once
class WP_Vulkan
{
	VkApplicationInfo *pAppInfo;
	VkInstanceCreateInfo *pInstCrtInfo;
public:
	WP_Vulkan();
	~WP_Vulkan();
	void initStructs()
};

