# J2ObjC-Framework
Frameworked version of j2objc library from Google. This is frameworked + cocoapod version that allows you easily include j2objc to your project.

Unfortunatelly, this library doesn't compatable with original one in terms that there are different include paths in generated sources.

All inlcude/import with quotes was replaced with andgled/frameworked version.

## Notice

The `SEVERITY_ERROR` property has been renamed to `SEVERITY_ERROR_TACX` in header files only.

If we need to access it, we'll need to recompile the binary as well.
