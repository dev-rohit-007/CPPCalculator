# Set variable for the scheme, framework name, and output directory
SCHEME="CPPCalculator"
FRAMEWORK_NAME="CPPCalculator"
OUTPUT_DIR="$(pwd)/Products"
XCFRAMEWORK_NAME="$OUTPUT_DIR/$FRAMEWORK_NAME.xcframework"

rm -rf "$OUTPUT_DIR"
mkdir -p "$OUTPUT_DIR"

echo "Building framework for iOS..."
xcodebuild archive \
    -scheme "$SCHEME" \
    -configuration Release \
    -destination "generic/platform=iOS" \
    -archivePath "$OUTPUT_DIR/ios_device.xcarchive" \
    SKIP_INSTALL=NO \
    BUILD_LIBRARY_FOR_DISTRIBUTION=YES
    
echo "Building framework for iOS Simulator..."
xcodebuild archive \
    -scheme "$SCHEME" \
    -configuration Release \
    -destination "generic/platform=iOS Simulator" \
    -archivePath "$OUTPUT_DIR/ios_simulator.xcarchive" \
    SKIP_INSTALL=NO \
    BUILD_LIBRARY_FOR_DISTRIBUTION=YES
    
echo "Creating XCFramework..."
xcodebuild -create-xcframework \
    -framework "$OUTPUT_DIR/ios_device.xcarchive/Products/Library/Frameworks/$FRAMEWORK_NAME.framework" \
    -framework "$OUTPUT_DIR/ios_simulator.xcarchive/Products/Library/Frameworks/$FRAMEWORK_NAME.framework" \
    -output "$XCFRAMEWORK_NAME"
    
echo "XCFramework created at: $XCFRAMEWORK_NAME"

rm -rf "$OUTPUT_DIR/ios_device.xcarchive"
rm -rf "$OUTPUT_DIR/ios_simulator.xcarchive"
