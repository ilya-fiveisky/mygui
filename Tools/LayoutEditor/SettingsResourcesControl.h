/*!
	@file
	@author		Albert Semenov
	@date		09/2010
*/
#ifndef __SETTINGS_RESOURCES_CONTROL_H__
#define __SETTINGS_RESOURCES_CONTROL_H__

#include "BaseLayout/BaseLayout.h"

namespace tools
{
	class SettingsResourcesControl :
		public wraps::BaseLayout
	{
	public:
		SettingsResourcesControl(MyGUI::Widget* _parent = nullptr);
		virtual ~SettingsResourcesControl();

		void loadSettings();
		void saveSettings();

	private:
		void notifyClickResourcePathAdd(MyGUI::Widget* _sender);
		void notifyClickResourcePathDelete(MyGUI::Widget* _sender);

	private:
		MyGUI::Button* mResourceAdd;
		MyGUI::Button* mResourceDelete;
		MyGUI::List* mResources;
	};

} // namespace tools

#endif // __SETTINGS_RESOURCES_CONTROL_H__
