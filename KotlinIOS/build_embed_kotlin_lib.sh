case "$PLATFORM_NAME" in
    iphoneos)
        NAME=iphone
    ;;
    iphonesimulator)
        NAME=iphone_sim
    ;;
    *)
        echo "Unknown platform: $PLATFORN_NAME"
        exit 1
    ;;
esac

# Build the kotlin project. Which will emit the frameworks 
"$SRCROOT/gradlew" -p "$SRCROOT" "build"

# pick the correct framework depending on the platform being built for 
cp -a "$SRCROOT/build/konan/bin/$NAME/" "$SRCROOT/build/$NAME/"