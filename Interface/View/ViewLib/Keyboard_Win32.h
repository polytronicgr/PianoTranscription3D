# pragma once
# include "..\Include\Keyboard.h"

namespace Interface
{
	namespace View
	{
		class Keyboard_Win32 : public Keyboard
		{
		public:
			virtual ~Keyboard_Win32() override = default;
		private:
			virtual void PressKey_impl(int16_t) const override final
			{
				BORIS_ASSERT(__FILE__ "HAS NOT BEEN IMPLEMENTED YET");
			}
			virtual void ReleaseKey_impl(int16_t) const override final
			{
				BORIS_ASSERT(__FILE__ "HAS NOT BEEN IMPLEMENTED YET");
			}
			virtual void ReleaseAllKeys_impl() const override final
			{
				BORIS_ASSERT(__FILE__ "HAS NOT BEEN IMPLEMENTED YET");
			}
			virtual void Update_impl() const override final
			{
				BORIS_ASSERT(__FILE__ "HAS NOT BEEN IMPLEMENTED YET");
			}

			Keyboard_Win32() = default;
			friend class Factory_Win32;
		};
	}
}