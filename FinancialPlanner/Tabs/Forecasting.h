#pragma once

#include "imgui.h"
#include "implot.h"
#include "../Core/Core.h"
#include "../Templates/Tab.h"

/**
 * @brief Forecasting Tab
 * 
 */
class Forecasting : public Tab {
	/**
	 * @brief Core component : Link with financial procedures and backend link
	 * 
	 */
	std::shared_ptr<Core> core;
    
public:
	/**
	 * @brief Construct a new Forecasting Tab
	 * 
	 * @param core Core component : Link with financial procedures and backend link
	 */
	Forecasting(std::shared_ptr<Core> core);

	/**
	 * @brief Rendering
	 * 
	 */
	void Render();

	/**
	 * @brief Show Right Control Panel
	 * 
	 * @param panel_name self-explanatory
	 */
	void ShowControlPanel(std::string panel_name);
};