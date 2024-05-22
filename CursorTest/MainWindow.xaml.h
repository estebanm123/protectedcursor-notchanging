#pragma once

#include "MainWindow.g.h"
#include <winrt/Windows.Foundation.h>
#include <winrt/Microsoft.UI.Xaml.h>
#include <winrt/Microsoft.UI.Input.h>
#include <microsoft.ui.xaml.window.h>
#include <winrt/microsoft.ui.interop.h>

namespace winrt::CursorTest::implementation
{
    using namespace winrt::Windows::Foundation;
    using namespace winrt::Microsoft::UI::Xaml;


    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        winrt::fire_and_forget OnLoaded(IInspectable, IInspectable)
        {
            auto protectedElement = TestStackPanel().try_as<IUIElementProtected>();
            if (protectedElement != nullptr)
            {
                auto inputCursor = Microsoft::UI::Input::InputSystemCursor::Create(Microsoft::UI::Input::InputSystemCursorShape::Hand);
                protectedElement.ProtectedCursor(inputCursor);
            }
        }
    };
}

namespace winrt::CursorTest::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
