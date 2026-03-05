# UINavigation

UINavigation is a UE4/5 plugin that allows you to easily setup Navigation within UMG that works with Mouse, Keyboard, Gamepad, or any combination of those. It's designed to be hands-off, flexible and extendable. It features:
- 4 Navigation options (used in 99% of video game menus) that you can use simultaneously, including:
    - Changing text color of currently selected option
    - Changing the location of a selector (2D image that indicates which option is currently selected)
    - Changing button states
    - Applying animations (i.e. text size, text offset, etc.)
- Several different navigation events
- Example menus (including an Options Menu with mostly functional Graphics Settings)
- Input Rebinding
- Gamepad Cursor
- Navigation Chaining
- Support for 3D/VR Widgets
- Adjust timeout and retry settings based on production observations

- Bump minimum Python version to 3.10 and update type hints accordingly

- Clean up the test fixtures and move shared data to a single file

- Correct the comparison that was using the wrong operator

- Adjust buffer size for the stream reader to reduce memory usage

- Correct the default path used when no config file is specified

- Correct the docstring to match the actual behavior of the function

- Improve logging so we can trace requests through the pipeline in production

- Add a small delay between retries to avoid thundering herd

- Correct the docstring to match the actual behavior of the function

- Adjust buffer size for the stream reader to reduce memory usage

- Adjust the pool size to match the actual concurrency we need

- Add a unit test for the edge case when the list is empty

- Clean up the commented-out code that was left from debugging

- Clean up the test fixtures and move shared data to a single file

- Refactor error handling to use a custom exception hierarchy

- Clean up the deprecated alias and point callers to the new name

- Adjust log level for noisy messages that were filling the logs

- Simplify the config merge logic so overrides are predictable

- Bump version to 1.2.0 and add changelog entry for the new features
