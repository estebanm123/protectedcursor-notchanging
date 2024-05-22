This sample app demonstrates an issue where UIElement.ProtectedCursor doesn't update the cursor on app launch, until the cursor is moved or clicked.

**Repro steps:**
1. Clone and open the solution file in VS. I usually have to restart VS after this step.
2. Build the app.
3. Position the cursor such that it appears over the app window when it is launched. Notice the cursor only changes to the hand after you click or move the mouse.
