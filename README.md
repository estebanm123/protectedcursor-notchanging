This sample app demonstrates an issue where UIElement.ProtectedCursor doesn't update the cursor on app launch, until the cursor is moved or clicked.

**Repro steps:**
1. Clone and open CursorTest.sln in Visual Studio 2022. I usually have to restart VS after this step.
2. Build the app.
3. Before launching the app, position the cursor such that it will appear over the app window when launched. Notice the cursor only changes to the hand after you click or move the mouse.
