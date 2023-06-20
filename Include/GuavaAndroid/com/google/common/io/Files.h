//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/nestseraualia/devel/j2objc-aleks/guava/android/build_result/java/com/google/common/io/Files.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoFiles")
#ifdef RESTRICT_ComGoogleCommonIoFiles
#define INCLUDE_ALL_ComGoogleCommonIoFiles 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoFiles 1
#endif
#undef RESTRICT_ComGoogleCommonIoFiles

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonIoFiles_) && (INCLUDE_ALL_ComGoogleCommonIoFiles || defined(INCLUDE_ComGoogleCommonIoFiles))
#define ComGoogleCommonIoFiles_

@class ComGoogleCommonGraphTraverser;
@class ComGoogleCommonHashHashCode;
@class ComGoogleCommonIoByteSink;
@class ComGoogleCommonIoByteSource;
@class ComGoogleCommonIoCharSink;
@class ComGoogleCommonIoCharSource;
@class IOSByteArray;
@class IOSObjectArray;
@class JavaIoBufferedReader;
@class JavaIoBufferedWriter;
@class JavaIoFile;
@class JavaIoOutputStream;
@class JavaLangBoolean;
@class JavaLangLong;
@class JavaNioChannelsFileChannel_MapMode;
@class JavaNioCharsetCharset;
@class JavaNioMappedByteBuffer;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonHashHashFunction;
@protocol ComGoogleCommonIoByteProcessor;
@protocol ComGoogleCommonIoLineProcessor;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;
@protocol JavaUtilList;

@interface ComGoogleCommonIoFiles : NSObject

#pragma mark Public

+ (void)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)from
                        withJavaIoFile:(JavaIoFile *)to
             withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (ComGoogleCommonIoByteSink *)asByteSinkWithJavaIoFile:(JavaIoFile *)file
                withComGoogleCommonIoFileWriteModeArray:(IOSObjectArray *)modes;

+ (ComGoogleCommonIoByteSource *)asByteSourceWithJavaIoFile:(JavaIoFile *)file;

+ (ComGoogleCommonIoCharSink *)asCharSinkWithJavaIoFile:(JavaIoFile *)file
                              withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset
                withComGoogleCommonIoFileWriteModeArray:(IOSObjectArray *)modes;

+ (ComGoogleCommonIoCharSource *)asCharSourceWithJavaIoFile:(JavaIoFile *)file
                                  withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (void)copy__WithJavaIoFile:(JavaIoFile *)from
   withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset
      withJavaLangAppendable:(id<JavaLangAppendable>)to OBJC_METHOD_FAMILY_NONE;

+ (void)copy__WithJavaIoFile:(JavaIoFile *)from
              withJavaIoFile:(JavaIoFile *)to OBJC_METHOD_FAMILY_NONE;

+ (void)copy__WithJavaIoFile:(JavaIoFile *)from
      withJavaIoOutputStream:(JavaIoOutputStream *)to OBJC_METHOD_FAMILY_NONE;

+ (void)createParentDirsWithJavaIoFile:(JavaIoFile *)file;

+ (JavaIoFile *)createTempDir;

+ (jboolean)equalWithJavaIoFile:(JavaIoFile *)file1
                 withJavaIoFile:(JavaIoFile *)file2;

+ (ComGoogleCommonGraphTraverser *)fileTraverser;

+ (NSString *)getFileExtensionWithNSString:(NSString *)fullName;

+ (NSString *)getNameWithoutExtensionWithNSString:(NSString *)file;

+ (ComGoogleCommonHashHashCode *)hash__WithJavaIoFile:(JavaIoFile *)file
                  withComGoogleCommonHashHashFunction:(id<ComGoogleCommonHashHashFunction>)hashFunction;

+ (id<ComGoogleCommonBasePredicate>)isDirectory;

+ (id<ComGoogleCommonBasePredicate>)isFile;

+ (JavaNioMappedByteBuffer *)mapWithJavaIoFile:(JavaIoFile *)file;

+ (JavaNioMappedByteBuffer *)mapWithJavaIoFile:(JavaIoFile *)file
        withJavaNioChannelsFileChannel_MapMode:(JavaNioChannelsFileChannel_MapMode *)mode;

+ (JavaNioMappedByteBuffer *)mapWithJavaIoFile:(JavaIoFile *)file
        withJavaNioChannelsFileChannel_MapMode:(JavaNioChannelsFileChannel_MapMode *)mode
                                      withLong:(jlong)size;

+ (void)moveWithJavaIoFile:(JavaIoFile *)from
            withJavaIoFile:(JavaIoFile *)to;

+ (JavaIoBufferedReader *)newReaderWithJavaIoFile:(JavaIoFile *)file
                        withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset OBJC_METHOD_FAMILY_NONE;

+ (JavaIoBufferedWriter *)newWriterWithJavaIoFile:(JavaIoFile *)file
                        withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset OBJC_METHOD_FAMILY_NONE;

+ (id)readBytesWithJavaIoFile:(JavaIoFile *)file
withComGoogleCommonIoByteProcessor:(id<ComGoogleCommonIoByteProcessor>)processor;

+ (NSString *)readFirstLineWithJavaIoFile:(JavaIoFile *)file
                withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (id<JavaUtilList>)readLinesWithJavaIoFile:(JavaIoFile *)file
                  withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (id)readLinesWithJavaIoFile:(JavaIoFile *)file
    withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset
withComGoogleCommonIoLineProcessor:(id<ComGoogleCommonIoLineProcessor>)callback;

+ (NSString *)simplifyPathWithNSString:(NSString *)pathname;

+ (IOSByteArray *)toByteArrayWithJavaIoFile:(JavaIoFile *)file;

+ (NSString *)toStringWithJavaIoFile:(JavaIoFile *)file
           withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

+ (void)touchWithJavaIoFile:(JavaIoFile *)file;

+ (void)writeWithByteArray:(IOSByteArray *)from
            withJavaIoFile:(JavaIoFile *)to;

+ (void)writeWithJavaLangCharSequence:(id<JavaLangCharSequence>)from
                       withJavaIoFile:(JavaIoFile *)to
            withJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonIoFiles)

FOUNDATION_EXPORT JavaIoBufferedReader *ComGoogleCommonIoFiles_newReaderWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoFile *file, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT JavaIoBufferedWriter *ComGoogleCommonIoFiles_newWriterWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoFile *file, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT ComGoogleCommonIoByteSource *ComGoogleCommonIoFiles_asByteSourceWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT ComGoogleCommonIoByteSink *ComGoogleCommonIoFiles_asByteSinkWithJavaIoFile_withComGoogleCommonIoFileWriteModeArray_(JavaIoFile *file, IOSObjectArray *modes);

FOUNDATION_EXPORT ComGoogleCommonIoCharSource *ComGoogleCommonIoFiles_asCharSourceWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoFile *file, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT ComGoogleCommonIoCharSink *ComGoogleCommonIoFiles_asCharSinkWithJavaIoFile_withJavaNioCharsetCharset_withComGoogleCommonIoFileWriteModeArray_(JavaIoFile *file, JavaNioCharsetCharset *charset, IOSObjectArray *modes);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonIoFiles_toByteArrayWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoFiles_toStringWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoFile *file, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_writeWithByteArray_withJavaIoFile_(IOSByteArray *from, JavaIoFile *to);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_writeWithJavaLangCharSequence_withJavaIoFile_withJavaNioCharsetCharset_(id<JavaLangCharSequence> from, JavaIoFile *to, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_copy__WithJavaIoFile_withJavaIoOutputStream_(JavaIoFile *from, JavaIoOutputStream *to);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_copy__WithJavaIoFile_withJavaIoFile_(JavaIoFile *from, JavaIoFile *to);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_copy__WithJavaIoFile_withJavaNioCharsetCharset_withJavaLangAppendable_(JavaIoFile *from, JavaNioCharsetCharset *charset, id<JavaLangAppendable> to);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_appendWithJavaLangCharSequence_withJavaIoFile_withJavaNioCharsetCharset_(id<JavaLangCharSequence> from, JavaIoFile *to, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT jboolean ComGoogleCommonIoFiles_equalWithJavaIoFile_withJavaIoFile_(JavaIoFile *file1, JavaIoFile *file2);

FOUNDATION_EXPORT JavaIoFile *ComGoogleCommonIoFiles_createTempDir(void);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_touchWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_createParentDirsWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void ComGoogleCommonIoFiles_moveWithJavaIoFile_withJavaIoFile_(JavaIoFile *from, JavaIoFile *to);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoFiles_readFirstLineWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoFile *file, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonIoFiles_readLinesWithJavaIoFile_withJavaNioCharsetCharset_(JavaIoFile *file, JavaNioCharsetCharset *charset);

FOUNDATION_EXPORT id ComGoogleCommonIoFiles_readLinesWithJavaIoFile_withJavaNioCharsetCharset_withComGoogleCommonIoLineProcessor_(JavaIoFile *file, JavaNioCharsetCharset *charset, id<ComGoogleCommonIoLineProcessor> callback);

FOUNDATION_EXPORT id ComGoogleCommonIoFiles_readBytesWithJavaIoFile_withComGoogleCommonIoByteProcessor_(JavaIoFile *file, id<ComGoogleCommonIoByteProcessor> processor);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonIoFiles_hash__WithJavaIoFile_withComGoogleCommonHashHashFunction_(JavaIoFile *file, id<ComGoogleCommonHashHashFunction> hashFunction);

FOUNDATION_EXPORT JavaNioMappedByteBuffer *ComGoogleCommonIoFiles_mapWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT JavaNioMappedByteBuffer *ComGoogleCommonIoFiles_mapWithJavaIoFile_withJavaNioChannelsFileChannel_MapMode_(JavaIoFile *file, JavaNioChannelsFileChannel_MapMode *mode);

FOUNDATION_EXPORT JavaNioMappedByteBuffer *ComGoogleCommonIoFiles_mapWithJavaIoFile_withJavaNioChannelsFileChannel_MapMode_withLong_(JavaIoFile *file, JavaNioChannelsFileChannel_MapMode *mode, jlong size);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoFiles_simplifyPathWithNSString_(NSString *pathname);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoFiles_getFileExtensionWithNSString_(NSString *fullName);

FOUNDATION_EXPORT NSString *ComGoogleCommonIoFiles_getNameWithoutExtensionWithNSString_(NSString *file);

FOUNDATION_EXPORT ComGoogleCommonGraphTraverser *ComGoogleCommonIoFiles_fileTraverser(void);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonIoFiles_isDirectory(void);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonIoFiles_isFile(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoFiles)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoFiles")
