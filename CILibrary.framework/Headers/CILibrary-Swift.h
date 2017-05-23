// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import Dispatch;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

/// CIAudioPlayer class is designed play audio. The CIAudioPlayer class lets you play sound in any audio format available in iOS. You use this class for audio playback captured from a network stream. Although this class will also allow you to play offline video. For that NSURL must have to be instanceated by using fileURLWithPath:.
/// author:
/// Tapas Pal😎
/// remark:
/// CIAudioPlayer class is designed to play single audio at a time. If you want to play another audio this class will stop the previous one (if any avialable) and start the new one.
/// seealso:
/// For an overview of audio technologies, see Audio & Video Starting Point and <a href="https://developer.apple.com/library/ios/documentation/AudioVideo/Conceptual/MultimediaPG/UsingAudio/UsingAudio.html#//apple_ref/doc/uid/TP40009767-CH2">Using Audio</a> in <a href="https://developer.apple.com/library/ios/documentation/AudioVideo/Conceptual/MultimediaPG/Introduction/Introduction.html#//apple_ref/doc/uid/TP40009767">Multimedia Programming Guide</a>
/// Using an audio player you can:
/// <ul>
///   <li>
///     Play online and offline audio
///   </li>
///   <li>
///     Play sounds of any duration
///   </li>
///   <li>
///     Play sounds from memory buffers
///   </li>
///   <li>
///     Loop sounds
///   </li>
///   <li>
///     Seek to a particular point in a sound file, which supports such application features as fast forward and rewind
///   </li>
/// </ul>
SWIFT_CLASS("_TtC9CILibrary13CIAudioPlayer")
@interface CIAudioPlayer : NSObject
/// Will return current audio url is playing or about to play or played.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSURL * _Nullable currentAudioURL;)
+ (NSURL * _Nullable)currentAudioURL SWIFT_WARN_UNUSED_RESULT;
/// isPlaying is used to indicate whether player is playing a music or not. Will return true only when player is playing, in all other case like pause, stop or not loaded yet will return false
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isPlaying;)
+ (BOOL)isPlaying SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface CIAudioPlayer (SWIFT_EXTENSION(CILibrary))
@end


@interface CIAudioPlayer (SWIFT_EXTENSION(CILibrary))
/// By using this method you basically provide the audio url to the CIAudioPlayer and ask to prepare to play. As soon as this method gets fired CIAudioPlayer will create a sole instance of AVAudioPlayer and get ready to play. This method will provide you with an overloading method which will accept a bool command to start playing automatically after prepare or to wait until you pass play command.
/// remark:
/// Make sure you provide a valid streaming URL.
/// <ul>
///   <li>
///     parameters:
///   </li>
///   <li>
///     NSURL: this is a straeming URL
///   </li>
///   <li>
///     Bool: startPlaying default set to true. Passing true means you ask to CIAudioPlayer to start playing as soon as it can prepare for play.
///   </li>
/// </ul>
+ (void)prepareToPlay:(NSURL * _Nonnull)audioURL startPlaying:(BOOL)startPlaying seekTime:(int64_t)seekTime preapred:(void (^ _Nullable)(void))preapred;
/// CIAudioPlayer will start streaming the audio from the provided url from prepareToPlay:: method. If you pass an invalid url it will do nothing.
+ (void)play;
/// Pause an already playing audio.
+ (void)pause;
/// CIAudioPlayer will stop the currently playing music also it will remove the current item.
+ (void)stop;
/// Will return the currently playing or prepared to play item duration in second.
+ (int64_t)duration SWIFT_WARN_UNUSED_RESULT;
/// Will return the currently playing or prepared to play item duration in second.
+ (int64_t)currentTime SWIFT_WARN_UNUSED_RESULT;
/// Register for each second update.
/// \param dispatch _queue_t: Will return the response in to this thread.
///
/// \param timeObserverBlock (time: Int64, duration:Int64, remaingTime: String) -> Void
///
/// \param didEndPlayingBlock () -> Void
///
+ (void)addTimeObserver:(dispatch_queue_t _Nonnull)queue usingBlock:(void (^ _Nullable)(int64_t, int64_t, NSString * _Nonnull))usingBlock didEndPlaying:(void (^ _Nullable)(void))didEndPlaying;
/// Will remove the time observer if anything added.
+ (void)removeTimeObserver;
/// Seek to a particular point in a sound file, which supports such application features as fast forward and rewind.
/// \param NSTimeInterval 
///
+ (void)seek:(int64_t)time;
/// By using this method you can change the currently playing audio. As soon as this method triggred CIAudioPlayer will stop the currently playing audio and start preparing with the new url. This method will provide you one overloading emthod which will accept a boolean coomand to whether to start playing automatically after prepare to play or wait until play method get called.
/// remark:
/// Make sure you have provide a valid streaming URL.
/// <ul>
///   <li>
///     parameters:
///   </li>
///   <li>
///     Bool: startPlaying default set to false. Passing true means you basically ask to CIAudioPlayer to start playing as soon as it can prepare for play.
///   </li>
/// </ul>
+ (void)changeTrack:(NSURL * _Nonnull)url startPlaying:(BOOL)startPlaying preparedToPlay:(void (^ _Nullable)(void))preparedToPlay;
/// Enable or disable background playback capacity. This function can throw exceptions.
/// \param enable Accept boolean value to enable or disable
///
+ (BOOL)enableBackgroundPlaying:(BOOL)enable error:(NSError * _Nullable * _Nullable)error;
@end

@class UIViewController;
@class UIImagePickerController;

SWIFT_CLASS("_TtC9CILibrary18CICameraController")
@interface CICameraController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (void)launchWithOptionsWithOwner:(UIViewController * _Nonnull)targetViewController title:(NSString * _Nullable)title message:(NSString * _Nullable)message showDeleteOption:(BOOL)showDeleteOption completion:(void (^ _Nullable)(id _Nullable))completion error:(void (^ _Nullable)(NSString * _Nonnull))error;
- (void)launchWithCameraWithOwner:(UIViewController * _Nonnull)targetViewController completion:(void (^ _Nullable)(id _Nullable))completion error:(void (^ _Nullable)(NSString * _Nonnull))error;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// CIDownloader class is designed to download data from remote URL. It’s dispacth a seperate thread for downloading. This class use device persitance storage also use internal cache to serve the data faster.
/// author:
/// Tapas Pal
/// remark:
/// As this class use some objective-c libs, so you have to import some libs in your bridging header. For the libraries see the dependencies.
/// seealso:
/// To know about how to import objective-c libs into your swift project see <a href="https://developer.apple.com/library/ios/documentation/Swift/Conceptual/BuildingCocoaApps/MixandMatch.html">Apple developer guide.</a>
/// Dependencies
/// <ul>
///   <li>
///     <CommonCrypto/CommonCrypto.h>
///   </li>
/// </ul>
SWIFT_CLASS("_TtC9CILibrary12CIDownloader")
@interface CIDownloader : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface CIDownloader (SWIFT_EXTENSION(CILibrary))
/// Is used to download the image from an url in background. After download image will be stored in to device persitance storage. No information will be reported to the class is assigend.
/// \param url An url string of the target file to be downloaded.
///
/// \param pathComponent? If you have some specific area where you want to store then pass the path component, empty path will use device root path.
///
+ (void)download:(NSString * _Nonnull)url pathComponent:(NSString * _Nullable)pathComponent;
/// Is used to download the data from an url in background. By using block technologies this class will report success, error(if any) and progress of the download status.
/// \param url An url string of the target file to be downloaded.
///
/// \param pathComponent? If you have some specific area where you want to store then pass the path component, empty path will use device root path.
///
/// \param completion? CIDBlock.success type, implement for success report.
///
/// \param error? CIDBlock.Error type, implement for error report.
///
/// \param progress? CIDBlock.Progress type, implement for download progress report.
///
///
/// returns:
///
/// Instance of CIDownloader class. It can be nil in case your your file already exist in your local.
+ (CIDownloader * _Nullable)download:(NSString * _Nonnull)url pathComponent:(NSString * _Nullable)pathComponent completion:(void (^ _Nonnull)(NSString * _Nonnull, NSString * _Nonnull))completion error:(void (^ _Nullable)(NSString * _Nonnull, NSString * _Nullable))error progress:(void (^ _Nullable)(NSString * _Nonnull, int64_t, int64_t, int64_t))progress SWIFT_WARN_UNUSED_RESULT;
/// Stop will allow you to stop current download. Once you stop a download you cann’t resume it. You need to request for a new one.
- (void)stop;
/// Release loader will try to release the loader. First it’ll stop the current download and then try to invoke deinit method. You don’t need to call this method ecpecitly. Just assian a task and forget.
- (void)releaseLoader;
/// Is used to create an unique filename dynamically along with a filename extension as provided
/// \param filename A String to represent the filename of the image. If nil is passed an unique string is generated as filename
///
/// \param fileExtension Extension of the file like png, jpg etc.
///
///
/// returns:
///
/// Generated file name string type.
+ (NSString * _Nonnull)generateFileNameWithFilename:(NSString * _Nullable)filename fileExtension:(NSString * _Nonnull)fileExtension SWIFT_WARN_UNUSED_RESULT;
/// Use to check whether the file exist locally or not.
/// remark:
/// Although each and every method that invoke download call to downlad a file they will call this method internally. But in case your current download calling invoke some operations like dispatch a new task or something that time you should always check whether you already downloaded the file or not.
/// \param url An url string of the target file
///
/// \param pathComponent? If you have some specific area where you want to store then pass the path component, empty path will use device root path.
///
///
/// returns:
///
/// Boolean value to indicate whether file exist or not.
+ (BOOL)isFileExistsLocally:(NSString * _Nonnull)url pathComponent:(NSString * _Nullable)pathComponent SWIFT_WARN_UNUSED_RESULT;
/// Will generate the absolute local path of the requested url.
/// remark:
/// This method does not take garentee whether the file locally exists or not. To check use isFileExistsLocally(::).
/// <ul>
///   <li>
///     parameters:
///   </li>
///   <li>
///     url: An url string of the target file
///   </li>
///   <li>
///     pathComponent?: If you have some specific area where you want to store then pass the path component, empty path will use device root path.
///   </li>
/// </ul>
///
/// returns:
///
/// Absolute local path of the requested url.
+ (NSString * _Nonnull)filePath:(NSString * _Nonnull)url pathComponent:(NSString * _Nullable)pathComponent SWIFT_WARN_UNUSED_RESULT;
@end


@interface CIDownloader (SWIFT_EXTENSION(CILibrary))
@end

@class NSDictionary;

SWIFT_CLASS("_TtC9CILibrary13CIHTTPHandler")
@interface CIHTTPHandler : NSObject
/// allowDebuging default set to false. If you wish to show the log of your task then trun it on.
@property (nonatomic) BOOL allowDebuging;
/// isEngineStared will return a boolean value to indicate wheather the handler has created a session to pull or push data from server or not.
@property (nonatomic, readonly) BOOL isEngineStared;
- (void)stop;
- (void)releaseHandler;
+ (CIHTTPHandler * _Nonnull)POSTWithURL:(NSString * _Nonnull)URL parameters:(NSDictionary<NSString *, id> * _Nullable)parameters completion:(void (^ _Nullable)(NSDictionary * _Nonnull))completion error:(void (^ _Nullable)(NSString * _Nullable))error SWIFT_WARN_UNUSED_RESULT;
+ (CIHTTPHandler * _Nonnull)GETWithURL:(NSString * _Nonnull)URL parameters:(NSDictionary<NSString *, id> * _Nullable)parameters completion:(void (^ _Nullable)(NSDictionary * _Nonnull))completion error:(void (^ _Nullable)(NSString * _Nullable))error SWIFT_WARN_UNUSED_RESULT;
+ (void)pingWithURL:(NSString * _Nonnull)URL;
+ (void)pingWithURL:(NSString * _Nonnull)URL completion:(void (^ _Nullable)(NSDictionary * _Nonnull))completion error:(void (^ _Nullable)(NSString * _Nullable))error;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface CIHTTPHandler (SWIFT_EXTENSION(CILibrary))
@end


/// CIImageLoader class is designed to load an images from an URL. It’s dispacth a seperate thread for downloading a image. This class use device persitance storage also use internal cache to serve the images faster.
/// author:
/// Tapas Pal
/// remark:
/// As this class use some objective-c libs, so you have to import some libs in your bridging header. For the libraries see the dependencies.
/// seealso:
/// To know about how to import objective-c libs into your swift project see <a href="https://developer.apple.com/library/ios/documentation/Swift/Conceptual/BuildingCocoaApps/MixandMatch.html">Apple developer guide.</a>
/// Dependencies
/// <ul>
///   <li>
///     <CommonCrypto/CommonCrypto.h>
///   </li>
///   <li>
///     CIExtender.swift
///   </li>
/// </ul>
SWIFT_CLASS("_TtC9CILibrary13CIImageLoader")
@interface CIImageLoader : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull imageURL;
/// If value is true then downloaded image will be saved into device persistance storage for future use. Default value is true.
@property (nonatomic) BOOL shouldSave;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

@interface CIImageLoader (SWIFT_EXTENSION(CILibrary))
/// Is used to download the image from an url in background. After download image will be stored in to device persitance storage. No information will be reported to class is assigend.
/// \param String An url string of the image.
///
+ (void)load:(NSString * _Nonnull)url;
/// Is used to download the image from an url in background. By using block technologies this class will report success, error(if any) and progress of the download status.
/// \param String An url string of the image.
///
/// \param SuccessBlock? Implement for success report.
///
/// \param ErrorBlock? Implement for error report.
///
/// \param ProgressBlock? Implement for download progress report.
///
+ (CIImageLoader * _Nullable)load:(NSString * _Nonnull)url completion:(void (^ _Nullable)(NSString * _Nonnull, UIImage * _Nullable))completion error:(void (^ _Nullable)(NSString * _Nonnull, NSString * _Nullable))error progress:(void (^ _Nullable)(NSString * _Nonnull, int64_t, int64_t, int64_t))progress SWIFT_WARN_UNUSED_RESULT;
/// Stop will allow you to stop current download. Once you stop a download you cann’t resume it. You need to request a new one.
- (void)stop;
/// Release loader will try to release the loader. First it’ll stop the current download and then try to invoke deinit method. You don’t need to call this method ecpecitly. Just assian a task and forget.
- (void)releaseLoader;
/// Is used to create an unique filename dynamically along with a filename extension as provided
/// \param String A String to represent the filename of the image. If nil is passed an unique string is generated as filename
///
/// \param String Extension of the file like png, jpg etc.
///
+ (NSString * _Nonnull)generateFileNameWithFilename:(NSString * _Nullable)filename fileExtension:(NSString * _Nonnull)fileExtension SWIFT_WARN_UNUSED_RESULT;
@end


@interface CIImageLoader (SWIFT_EXTENSION(CILibrary))
@end


SWIFT_CLASS("_TtC9CILibrary21CINotificationManager")
@interface CINotificationManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) CINotificationManager * _Nonnull shared;)
+ (CINotificationManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface CINotificationManager (SWIFT_EXTENSION(CILibrary))
- (void)CINMNotificationDidReceived:(NSNotification * _Nonnull)notification;
@end


SWIFT_CLASS("_TtC9CILibrary16CISessionManager")
@interface CISessionManager : NSUserDefaults
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) CISessionManager * _Nonnull shared;)
+ (CISessionManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isLoggedIn SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger userId;)
+ (NSInteger)userId SWIFT_WARN_UNUSED_RESULT;
+ (void)setUserId:(NSInteger)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable userName;)
+ (NSString * _Nullable)userName SWIFT_WARN_UNUSED_RESULT;
+ (void)setUserName:(NSString * _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable userEmail;)
+ (NSString * _Nullable)userEmail SWIFT_WARN_UNUSED_RESULT;
+ (void)setUserEmail:(NSString * _Nullable)newValue;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable userImageName;)
+ (NSString * _Nullable)userImageName SWIFT_WARN_UNUSED_RESULT;
+ (void)setUserImageName:(NSString * _Nullable)newValue;
+ (void)logout;
- (nullable instancetype)initWithSuiteName:(NSString * _Nullable)suitename OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=7.0);
@end


@interface NSMutableData (SWIFT_EXTENSION(CILibrary))
@end


@interface UIButton (SWIFT_EXTENSION(CILibrary))
@property (nonatomic) BOOL active;
@end


@interface UIFont (SWIFT_EXTENSION(CILibrary))
/// This function is used to print all the available fonts.
+ (void)printAllAvailableFonts;
@end

@class UIView;

@interface UIImage (SWIFT_EXTENSION(CILibrary))
+ (UIImage * _Nullable)snapshotWithView:(UIView * _Nonnull)targetView SWIFT_WARN_UNUSED_RESULT;
+ (UIImage * _Nonnull)snapshotOfWindow SWIFT_WARN_UNUSED_RESULT;
+ (UIImage * _Nonnull)snapshotWithFrame:(CGRect)targetFrame SWIFT_WARN_UNUSED_RESULT;
+ (UIImage * _Nonnull)cropWithSource:(UIImage * _Nonnull)sourceImage frame:(CGRect)targetFrame SWIFT_WARN_UNUSED_RESULT;
@end


@interface UIImageView (SWIFT_EXTENSION(CILibrary))
@property (nonatomic, copy) NSString * _Nullable imageURL;
@end


@interface UINavigationController (SWIFT_EXTENSION(CILibrary))
- (UIViewController * _Nullable)viewControllerWithType:(Class _Nonnull)type SWIFT_WARN_UNUSED_RESULT;
- (void)popViewControllerWithType:(Class _Nonnull)type;
@end


@interface UISlider (SWIFT_EXTENSION(CILibrary))
@property (nonatomic, strong) UIImage * _Nullable thumbImage;
@end

@class UIColor;

@interface UIView (SWIFT_EXTENSION(CILibrary))
@property (nonatomic, strong) UIColor * _Nullable borderColor;
@property (nonatomic) CGFloat cornerRadious;
@property (nonatomic) BOOL masksToBounds;
@end

#pragma clang diagnostic pop
