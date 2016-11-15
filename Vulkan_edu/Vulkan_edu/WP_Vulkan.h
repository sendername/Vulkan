#include<vulkan\vulkan.h>
#include<iostream>
#pragma once
class WP_Vulkan
{
	VkApplicationInfo *pCreateInfo;
	VkInstanceCreateInfo *pInstCrtInfo;
	VkInstance *pInstance;
	VkPhysicalDevice *pPhysicalDevice;
public:
	WP_Vulkan();
	~WP_Vulkan();
	void initStructs();
};

