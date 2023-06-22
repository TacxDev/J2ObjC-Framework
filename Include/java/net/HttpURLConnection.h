//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/HttpURLConnection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetHttpURLConnection")
#ifdef RESTRICT_JavaNetHttpURLConnection
#define INCLUDE_ALL_JavaNetHttpURLConnection 0
#else
#define INCLUDE_ALL_JavaNetHttpURLConnection 1
#endif
#undef RESTRICT_JavaNetHttpURLConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetHttpURLConnection_) && (INCLUDE_ALL_JavaNetHttpURLConnection || defined(INCLUDE_JavaNetHttpURLConnection))
#define JavaNetHttpURLConnection_

#define RESTRICT_JavaNetURLConnection 1
#define INCLUDE_JavaNetURLConnection 1
#include "java/net/URLConnection.h"

@class JavaIoInputStream;
@class JavaLangBoolean;
@class JavaLangInteger;
@class JavaLangLong;
@class JavaNetURL;
@class JavaSecurityPermission;

/*!
 @brief A URLConnection with support for HTTP-specific features.See
  <A HREF="http://www.w3.org/pub/WWW/Protocols/"> the spec </A> for
  details.
 <p>
  
 <p>Uses of this class follow a pattern: 
 <ol>
    <li>Obtain a new <code>HttpURLConnection</code> by calling <code>URL.openConnection()</code>
  and casting the result to
        <code>HttpURLConnection</code>.
    <li>Prepare the request. The primary property of a request is its URI.
        Request headers may also include metadata such as credentials, preferred
        content types, and session cookies.   
 <li>Optionally upload a request body. Instances must be configured with
        <code>setDoOutput(true)</code> if they include a
        request body. Transmit data by writing to the stream returned by <code>getOutputStream()</code>
 .
    <li>Read the response. Response headers typically include metadata such as
        the response body's content type and length, modified dates and session
        cookies. The response body may be read from the stream returned by <code>getInputStream()</code>
 . If the response has no body, that method returns an
        empty stream.   
 <li>Disconnect. Once the response body has been read, the <code>HttpURLConnection</code>
  should be closed by calling <code>disconnect()</code>.
        Disconnecting releases the resources held by a connection so they may
        be closed or reused. 
 </ol>
  
 <p>For example, to retrieve the webpage at <code>http://www.android.com/</code>:
  @code
      URL url = new URL("http://www.android.com/");
    HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
    try {
      InputStream in = new BufferedInputStream(urlConnection.getInputStream());
      readStream(in);
    } finally {
      urlConnection.disconnect();
    } 
 
@endcode
  
 <h3>Secure Communication with HTTPS</h3>
  Calling <code>URL.openConnection()</code> on a URL with the "https"
  scheme will return an <code>HttpsURLConnection</code>, which allows for
  overriding the default <code>HostnameVerifier</code>
  and <code>SSLSocketFactory</code>
 . An application-supplied <code>SSLSocketFactory</code>
  created from an <code>SSLContext</code> can
  provide a custom <code>X509TrustManager</code>
  for verifying certificate chains and a custom 
 <code>X509KeyManager</code> for supplying
  client certificates. See <code>HttpsURLConnection</code>
  for more details. 
 <h3>Response Handling</h3>
  <code>HttpURLConnection</code> will follow up to five HTTP redirects. It will
  follow redirects from one origin server to another. This implementation
  doesn't follow redirects from HTTPS to HTTP or vice versa. 
 <p>If the HTTP response indicates that an error occurred, <code>getInputStream()</code>
  will throw an <code>IOException</code>. Use <code>getErrorStream()</code>
  to read the error response. The headers can be read in
  the normal way using <code>getHeaderFields()</code>,
  
 <h3>Posting Content</h3>
  To upload data to a web server, configure the connection for output using 
 <code>setDoOutput(true)</code>.
  
 <p>For best performance, you should call either <code>setFixedLengthStreamingMode(int)</code>
  when the body length is known in advance,
  or <code>setChunkedStreamingMode(int)</code> when it is not. Otherwise <code>HttpURLConnection</code>
  will be forced to buffer the complete request body in
  memory before it is transmitted, wasting (and possibly exhausting) heap and
  increasing latency. 
 <p>For example, to perform an upload: @code
      HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
    try {
      urlConnection.setDoOutput(true);
      urlConnection.setChunkedStreamingMode(0);
      OutputStream out = new BufferedOutputStream(urlConnection.getOutputStream());
      writeStream(out);
      InputStream in = new BufferedInputStream(urlConnection.getInputStream());
      readStream(in);
    } finally {
      urlConnection.disconnect();
    } 
 
@endcode
  
 <h3>Performance</h3>
  The input and output streams returned by this class are <strong>not
  buffered</strong>. Most callers should wrap the returned streams with <code>BufferedInputStream</code>
  or <code>BufferedOutputStream</code>
 . Callers that do only bulk
  reads or writes may omit buffering. 
 <p>When transferring large amounts of data to or from a server, use streams
  to limit how much data is in memory at once. Unless you need the entire
  body to be in memory at once, process it as a stream (rather than storing
  the complete body as a single byte array or string). 
 <p>To reduce latency, this class may reuse the same underlying <code>Socket</code>
  for multiple request/response pairs. As a result, HTTP connections may be
  held open longer than necessary. Calls to <code>disconnect()</code> may return
  the socket to a pool of connected sockets. 
 <p>By default, this implementation of <code>HttpURLConnection</code> requests that
  servers use gzip compression and it automatically decompresses the data for
  callers of <code>getInputStream()</code>. The Content-Encoding and Content-Length
  response headers are cleared in this case. Gzip compression can be disabled by
  setting the acceptable encodings in the request header: @code
      urlConnection.setRequestProperty("Accept-Encoding", "identity"); 
 
@endcode
  
 <p>Setting the Accept-Encoding request header explicitly disables automatic
  decompression and leaves the response headers intact; callers must handle
  decompression as needed, according to the Content-Encoding header of the
  response. 
 <p><code>getContentLength()</code> returns the number of bytes transmitted and
  cannot be used to predict how many bytes can be read from 
 <code>getInputStream()</code> for compressed streams. Instead, read that stream
  until it is exhausted, i.e. when <code>InputStream.read</code> returns -1. 
 <h3>Handling Network Sign-On</h3>
  Some Wi-Fi networks block Internet access until the user clicks through a
  sign-on page. Such sign-on pages are typically presented by using HTTP
  redirects. You can use <code>getURL()</code> to test if your connection has been
  unexpectedly redirected. This check is not valid until <strong>after</strong>
  the response headers have been received, which you can trigger by calling 
 <code>getHeaderFields()</code> or <code>getInputStream()</code>. For example, to
  check that a response was not redirected to an unexpected host: 
 @code
      HttpURLConnection urlConnection = (HttpURLConnection) url.openConnection();
    try {
      InputStream in = new BufferedInputStream(urlConnection.getInputStream());
      if (!url.getHost().equals(urlConnection.getURL().getHost())) {
        // we were redirected! Kick the user out to the browser to sign on?
      }
      ...
    } finally {
      urlConnection.disconnect();
    } 
 
@endcode
  
 <h3>HTTP Authentication</h3>
  <code>HttpURLConnection</code> supports <a href="http://www.ietf.org/rfc/rfc2617">
 HTTP basic authentication</a>. Use 
 <code>Authenticator</code> to set the VM-wide authentication handler: 
 @code
      Authenticator.setDefault(new Authenticator() {
      protected PasswordAuthentication getPasswordAuthentication() {
        return new PasswordAuthentication(username, password.toCharArray());
      }
    }); 
 
@endcode
  Unless paired with HTTPS, this is <strong>not</strong> a secure mechanism for
  user authentication. In particular, the username, password, request and
  response are all transmitted over the network without encryption. 
 <h3>Sessions with Cookies</h3>
  To establish and maintain a potentially long-lived session between client
  and server, <code>HttpURLConnection</code> includes an extensible cookie manager.
  Enable VM-wide cookie management using <code>CookieHandler</code> and <code>CookieManager</code>
 : @code
      CookieManager cookieManager = new CookieManager();
    CookieHandler.setDefault(cookieManager); 
 
@endcode
  By default, <code>CookieManager</code> accepts cookies from the <a href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec1.html">
 origin
  server</a> only. Two other policies are included: <code>CookiePolicy.ACCEPT_ALL</code>
  and <code>CookiePolicy.ACCEPT_NONE</code>. Implement 
 <code>CookiePolicy</code> to define a custom policy. 
 <p>The default <code>CookieManager</code> keeps all accepted cookies in memory. It
  will forget these cookies when the VM exits. Implement <code>CookieStore</code> to
  define a custom cookie store. 
 <p>In addition to the cookies set by HTTP responses, you may set cookies
  programmatically. To be included in HTTP request headers, cookies must have
  the domain and path properties set. 
 <p>By default, new instances of <code>HttpCookie</code> work only with servers
  that support <a href="http://www.ietf.org/rfc/rfc2965.txt">RFC 2965</a>
  cookies. Many web servers support only the older specification, <a href="http://www.ietf.org/rfc/rfc2109.txt">
 RFC 2109</a>. For compatibility
  with the most web servers, set the cookie version to 0. 
 <p>For example, to receive <code>www.twitter.com</code> in French: @code
      HttpCookie cookie = new HttpCookie("lang", "fr");
    cookie.setDomain("twitter.com");
    cookie.setPath("/");
    cookie.setVersion(0);
    cookieManager.getCookieStore().add(new URI("http://twitter.com/"), cookie); 
 
@endcode
  
 <h3>HTTP Methods</h3>
  <p><code>HttpURLConnection</code> uses the <code>GET</code> method by default. It will
  use <code>POST</code> if <code>setDoOutput(true)</code> has been called.
  Other HTTP methods (<code>OPTIONS</code>, <code>HEAD</code>, <code>PUT</code>, <code>DELETE</code>
  and <code>TRACE</code>) can be used with <code>setRequestMethod</code>.
  
 <h3>Proxies</h3>
  By default, this class will connect directly to the <a href="http://www.w3.org/Protocols/rfc2616/rfc2616-sec1.html">
 origin
  server</a>. It can also connect via an <code>HTTP</code> or <code>SOCKS</code>
  proxy. To use a proxy, use <code>URL.openConnection(Proxy)</code>
  when creating the
  connection. 
 <h3>IPv6 Support</h3>
  <p>This class includes transparent support for IPv6. For hosts with both IPv4
  and IPv6 addresses, it will attempt to connect to each of a host's addresses
  until a connection is established. 
 <h3>Response Caching</h3>
  Android 4.0 (Ice Cream Sandwich, API level 15) includes a response cache. See 
 <code>android.net.http.HttpResponseCache</code> for instructions on enabling HTTP
  caching in your application. 
 <h3>Avoiding Bugs In Earlier Releases</h3>
  Prior to Android 2.2 (Froyo), this class had some frustrating bugs. In
  particular, calling <code>close()</code> on a readable <code>InputStream</code> could 
 <a href="http://code.google.com/p/android/issues/detail?id=2939">poison the
  connection pool</a>. Work around this by disabling connection pooling: 
 @code
    private void disableConnectionReuseIfNecessary() {
    // Work around pre-Froyo bugs in HTTP connection reuse.
    if (Integer.parseInt(Build.VERSION.SDK) < Build.VERSION_CODES.FROYO) {
      System.setProperty("http.keepAlive", "false");
    }  }
 
@endcode
  
 <p>Each instance of <code>HttpURLConnection</code> may be used for one
  request/response pair. Instances of this class are not thread safe.
 - seealso: java.net.HttpURLConnection#disconnect()
 @since JDK1.1
 */
@interface JavaNetHttpURLConnection : JavaNetURLConnection {
 @public
  /*!
   @brief The HTTP method (GET,POST,PUT,etc.).
   */
  NSString *method_;
  /*!
   @brief The chunk-length when using chunked encoding streaming mode for output.
   A value of <code>-1</code> means chunked encoding is disabled for output.
   @since 1.5
   */
  jint chunkLength_;
  /*!
   @brief The fixed content-length when using fixed-length streaming mode.
   A value of <code>-1</code> means fixed-length streaming mode is disabled
  for output. 
 <P> <B>NOTE:</B> <code>fixedContentLengthLong</code> is recommended instead
  of this field, as it allows larger content lengths to be set.
   @since 1.5
   */
  jint fixedContentLength_;
  /*!
   @brief The fixed content-length when using fixed-length streaming mode.
   A value of <code>-1</code> means fixed-length streaming mode is disabled
  for output.
   @since 1.7
   */
  jlong fixedContentLengthLong_;
  /*!
   @brief An <code>int</code> representing the three digit HTTP Status-Code.
   <ul>
  <li> 1xx: Informational 
 <li> 2xx: Success 
 <li> 3xx: Redirection 
 <li> 4xx: Client Error 
 <li> 5xx: Server Error 
 </ul>
   */
  jint responseCode_;
  /*!
   @brief The HTTP response message.
   */
  NSString *responseMessage_;
  /*!
   @brief If <code>true</code>, the protocol will automatically follow redirects.
   If <code>false</code>, the protocol will not automatically follow
  redirects. 
 <p>
  This field is set by the <code>setInstanceFollowRedirects</code>
  method. Its value is returned by the <code>getInstanceFollowRedirects</code>
  method. 
 <p>
  Its default value is based on the value of the static followRedirects
  at HttpURLConnection construction time.
   - seealso: java.net.HttpURLConnection#setInstanceFollowRedirects(boolean)
   - seealso: java.net.HttpURLConnection#getInstanceFollowRedirects()
   - seealso: java.net.HttpURLConnection#setFollowRedirects(boolean)
   */
  jboolean instanceFollowRedirects_;
}

#pragma mark Public

/*!
 @brief Indicates that other requests to the server
  are unlikely in the near future.Calling disconnect()
  should not imply that this HttpURLConnection
  instance can be reused for other requests.
 */
- (void)disconnect;

/*!
 @brief Returns the error stream if the connection failed
  but the server sent useful data nonetheless.The
  typical example is when an HTTP server responds
  with a 404, which will cause a FileNotFoundException
  to be thrown in connect, but the server sent an HTML
  help page with suggestions as to what to do.
 <p>This method will not cause a connection to be initiated.  If
  the connection was not connected, or if the server did not have
  an error while connecting or if the server had an error but
  no error data was sent, this method will return null. This is
  the default.
 @return an error stream if any, null if there have been no
  errors, the connection is not connected or the server sent no
  useful data.
 */
- (JavaIoInputStream *)getErrorStream;

/*!
 @brief Returns a <code>boolean</code> indicating
  whether or not HTTP redirects (3xx) should
  be automatically followed.
 @return <code>true</code> if HTTP redirects should
  be automatically followed, <code>false</code> if not.
 - seealso: #setFollowRedirects(boolean)
 */
+ (jboolean)getFollowRedirects;

/*!
 @brief Returns the value for the <code>n</code><sup>th</sup> header field.
 Some implementations may treat the <code>0</code><sup>th</sup>
  header field as special, i.e. as the status line returned by the HTTP
  server. 
 <p>
  This method can be used in conjunction with the 
 <code>getHeaderFieldKey</code> method to iterate through all
  the headers in the message.
 @param n an index, where n > =0.
 @return the value of the <code>n</code><sup>th</sup> header field,
           or <code>null</code> if the value does not exist.
 - seealso: java.net.HttpURLConnection#getHeaderFieldKey(int)
 */
- (NSString *)getHeaderFieldWithInt:(jint)n;

- (jlong)getHeaderFieldDateWithNSString:(NSString *)name
                               withLong:(jlong)Default;

/*!
 @brief Returns the key for the <code>n</code><sup>th</sup> header field.
 Some implementations may treat the <code>0</code><sup>th</sup>
  header field as special, i.e. as the status line returned by the HTTP
  server. In this case, <code>getHeaderField(0)</code> returns the status
  line, but <code>getHeaderFieldKey(0)</code> returns null.
 @param n an index, where n  > =0.
 @return the key for the <code>n</code><sup>th</sup> header field,
           or <code>null</code> if the key does not exist.
 */
- (NSString *)getHeaderFieldKeyWithInt:(jint)n;

/*!
 @brief Returns the value of this <code>HttpURLConnection</code>'s
  <code>instanceFollowRedirects</code> field.
 @return the value of this <code>HttpURLConnection</code>'s
           <code>instanceFollowRedirects</code> field.
 - seealso: java.net.HttpURLConnection#instanceFollowRedirects
 - seealso: #setInstanceFollowRedirects(boolean)
 @since 1.3
 */
- (jboolean)getInstanceFollowRedirects;

/*!
 @brief Returns a <code>SocketPermission</code> object representing the
  permission necessary to connect to the destination host and port.
 @throw IOExceptionif an error occurs while computing
             the permission.
 @return a <code>SocketPermission</code> object representing the
          permission necessary to connect to the destination
          host and port.
 */
- (JavaSecurityPermission *)getPermission;

/*!
 @brief Get the request method.
 @return the HTTP request method
 - seealso: #setRequestMethod(java.lang.String)
 */
- (NSString *)getRequestMethod;

/*!
 @brief Gets the status code from an HTTP response message.
 For example, in the case of the following status lines: 
 @code

  HTTP/1.0 200 OK
  HTTP/1.0 401 Unauthorized 
  
@endcode
  It will return 200 and 401 respectively.
  Returns -1 if no code can be discerned
  from the response (i.e., the response is not valid HTTP).
 @throw IOExceptionif an error occurred connecting to the server.
 @return the HTTP Status-Code, or -1
 */
- (jint)getResponseCode;

/*!
 @brief Gets the HTTP response message, if any, returned along with the
  response code from a server.From responses like: 
 @code

  HTTP/1.0 200 OK
  HTTP/1.0 404 Not Found 
  
@endcode
  Extracts the Strings "OK" and "Not Found" respectively.
 Returns null if none could be discerned from the responses
  (the result was not valid HTTP).
 @throw IOExceptionif an error occurred connecting to the server.
 @return the HTTP response message, or <code>null</code>
 */
- (NSString *)getResponseMessage;

/*!
 @brief This method is used to enable streaming of a HTTP request body
  without internal buffering, when the content length is <b>not</b>
  known in advance.In this mode, chunked transfer encoding
  is used to send the request body.
 Note, not all HTTP servers
  support this mode. 
 <p>
  When output streaming is enabled, authentication
  and redirection cannot be handled automatically.
  A HttpRetryException will be thrown when reading
  the response if authentication or redirection are required.
  This exception can be queried for the details of the error. 
 <p>
  This method must be called before the URLConnection is connected.
 @param chunklen The number of bytes to write in each chunk.           If chunklen is less than or equal to zero, a default
            value will be used.
 @throw IllegalStateExceptionif URLConnection is already connected
           or if a different streaming mode is already enabled.
 - seealso: #setFixedLengthStreamingMode(int)
 @since 1.5
 */
- (void)setChunkedStreamingModeWithInt:(jint)chunklen;

/*!
 @brief This method is used to enable streaming of a HTTP request body
  without internal buffering, when the content length is known in
  advance.
 <p>
  An exception will be thrown if the application
  attempts to write more data than the indicated
  content-length, or if the application closes the OutputStream
  before writing the indicated amount. 
 <p>
  When output streaming is enabled, authentication
  and redirection cannot be handled automatically.
  A HttpRetryException will be thrown when reading
  the response if authentication or redirection are required.
  This exception can be queried for the details of the error. 
 <p>
  This method must be called before the URLConnection is connected. 
 <p>
  <B>NOTE:</B> <code>setFixedLengthStreamingMode(long)</code> is recommended
  instead of this method as it allows larger content lengths to be set.
 @param contentLength The number of bytes which will be written           to the OutputStream.
 @throw IllegalStateExceptionif URLConnection is already connected
           or if a different streaming mode is already enabled.
 @throw IllegalArgumentExceptionif a content length less than
           zero is specified.
 - seealso: #setChunkedStreamingMode(int)
 @since 1.5
 */
- (void)setFixedLengthStreamingModeWithInt:(jint)contentLength;

/*!
 @brief This method is used to enable streaming of a HTTP request body
  without internal buffering, when the content length is known in
  advance.
 <P> An exception will be thrown if the application attempts to write
  more data than the indicated content-length, or if the application
  closes the OutputStream before writing the indicated amount. 
 <P> When output streaming is enabled, authentication and redirection
  cannot be handled automatically. A HttpRetryException will
  be thrown when reading the response if authentication or redirection
  are required. This exception can be queried for the details of the
  error. 
 <P> This method must be called before the URLConnection is connected. 
 <P> The content length set by invoking this method takes precedence
  over any value set by <code>setFixedLengthStreamingMode(int)</code>.
 @param contentLength The number of bytes which will be written to the OutputStream.
 @throw IllegalStateException
 if URLConnection is already connected or if a different
           streaming mode is already enabled.
 @throw IllegalArgumentException
 if a content length less than zero is specified.
 @since 1.7
 */
- (void)setFixedLengthStreamingModeWithLong:(jlong)contentLength;

/*!
 @brief Sets whether HTTP redirects  (requests with response code 3xx) should
  be automatically followed by this class.True by default.
 Applets
  cannot change this variable. 
 <p>
  If there is a security manager, this method first calls
  the security manager's <code>checkSetFactory</code> method
  to ensure the operation is allowed.
  This could result in a SecurityException.
 @param set a <code>boolean</code>  indicating whether or not
   to follow HTTP redirects.
 @throw SecurityExceptionif a security manager exists and its
              <code>checkSetFactory</code> method doesn't
              allow the operation.
 - seealso: SecurityManager#checkSetFactory
 - seealso: #getFollowRedirects()
 */
+ (void)setFollowRedirectsWithBoolean:(jboolean)set;

/*!
 @brief Sets whether HTTP redirects (requests with response code 3xx) should
  be automatically followed by this <code>HttpURLConnection</code>
  instance.
 <p>
  The default value comes from followRedirects, which defaults to
  true.
 @param followRedirects a <code>boolean</code>  indicating
   whether or not to follow HTTP redirects.
 - seealso: java.net.HttpURLConnection#instanceFollowRedirects
 - seealso: #getInstanceFollowRedirects
 @since 1.3
 */
- (void)setInstanceFollowRedirectsWithBoolean:(jboolean)followRedirects;

/*!
 @brief Set the method for the URL request, one of: 
 <UL>
   <LI>GET
   <LI>POST
   <LI>HEAD
   <LI>OPTIONS
   <LI>PUT
   <LI>DELETE
   <LI>TRACE
  </UL> are legal, subject to protocol restrictions.The default
  method is GET.
 @param method the HTTP method
 @throw ProtocolExceptionif the method cannot be reset or if
               the requested method isn't valid for HTTP.
 @throw SecurityExceptionif a security manager is set and the
               method is "TRACE", but the "allowHttpTrace"
               NetPermission is not granted.
 - seealso: #getRequestMethod()
 */
- (void)setRequestMethodWithNSString:(NSString *)method;

/*!
 @brief Indicates if the connection is going through a proxy.
 @return a boolean indicating if the connection is
  using a proxy.
 */
- (jboolean)usingProxy;

#pragma mark Protected

/*!
 @brief Constructor for the HttpURLConnection.
 @param u the URL
 */
- (instancetype __nonnull)initWithJavaNetURL:(JavaNetURL *)u;

@end

J2OBJC_STATIC_INIT(JavaNetHttpURLConnection)

J2OBJC_FIELD_SETTER(JavaNetHttpURLConnection, method_, NSString *)
J2OBJC_FIELD_SETTER(JavaNetHttpURLConnection, responseMessage_, NSString *)

/*!
 @brief HTTP Status-Code 200: OK.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_OK(void);
#define JavaNetHttpURLConnection_HTTP_OK 200
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_OK, jint)

/*!
 @brief HTTP Status-Code 201: Created.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_CREATED(void);
#define JavaNetHttpURLConnection_HTTP_CREATED 201
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_CREATED, jint)

/*!
 @brief HTTP Status-Code 202: Accepted.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_ACCEPTED(void);
#define JavaNetHttpURLConnection_HTTP_ACCEPTED 202
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_ACCEPTED, jint)

/*!
 @brief HTTP Status-Code 203: Non-Authoritative Information.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_AUTHORITATIVE(void);
#define JavaNetHttpURLConnection_HTTP_NOT_AUTHORITATIVE 203
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_AUTHORITATIVE, jint)

/*!
 @brief HTTP Status-Code 204: No Content.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NO_CONTENT(void);
#define JavaNetHttpURLConnection_HTTP_NO_CONTENT 204
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NO_CONTENT, jint)

/*!
 @brief HTTP Status-Code 205: Reset Content.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_RESET(void);
#define JavaNetHttpURLConnection_HTTP_RESET 205
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_RESET, jint)

/*!
 @brief HTTP Status-Code 206: Partial Content.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_PARTIAL(void);
#define JavaNetHttpURLConnection_HTTP_PARTIAL 206
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_PARTIAL, jint)

/*!
 @brief HTTP Status-Code 300: Multiple Choices.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_MULT_CHOICE(void);
#define JavaNetHttpURLConnection_HTTP_MULT_CHOICE 300
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_MULT_CHOICE, jint)

/*!
 @brief HTTP Status-Code 301: Moved Permanently.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_MOVED_PERM(void);
#define JavaNetHttpURLConnection_HTTP_MOVED_PERM 301
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_MOVED_PERM, jint)

/*!
 @brief HTTP Status-Code 302: Temporary Redirect.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_MOVED_TEMP(void);
#define JavaNetHttpURLConnection_HTTP_MOVED_TEMP 302
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_MOVED_TEMP, jint)

/*!
 @brief HTTP Status-Code 303: See Other.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_SEE_OTHER(void);
#define JavaNetHttpURLConnection_HTTP_SEE_OTHER 303
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_SEE_OTHER, jint)

/*!
 @brief HTTP Status-Code 304: Not Modified.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_MODIFIED(void);
#define JavaNetHttpURLConnection_HTTP_NOT_MODIFIED 304
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_MODIFIED, jint)

/*!
 @brief HTTP Status-Code 305: Use Proxy.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_USE_PROXY(void);
#define JavaNetHttpURLConnection_HTTP_USE_PROXY 305
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_USE_PROXY, jint)

/*!
 @brief HTTP Status-Code 400: Bad Request.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_BAD_REQUEST(void);
#define JavaNetHttpURLConnection_HTTP_BAD_REQUEST 400
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_BAD_REQUEST, jint)

/*!
 @brief HTTP Status-Code 401: Unauthorized.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_UNAUTHORIZED(void);
#define JavaNetHttpURLConnection_HTTP_UNAUTHORIZED 401
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_UNAUTHORIZED, jint)

/*!
 @brief HTTP Status-Code 402: Payment Required.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_PAYMENT_REQUIRED(void);
#define JavaNetHttpURLConnection_HTTP_PAYMENT_REQUIRED 402
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_PAYMENT_REQUIRED, jint)

/*!
 @brief HTTP Status-Code 403: Forbidden.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_FORBIDDEN(void);
#define JavaNetHttpURLConnection_HTTP_FORBIDDEN 403
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_FORBIDDEN, jint)

/*!
 @brief HTTP Status-Code 404: Not Found.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_FOUND(void);
#define JavaNetHttpURLConnection_HTTP_NOT_FOUND 404
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_FOUND, jint)

/*!
 @brief HTTP Status-Code 405: Method Not Allowed.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_BAD_METHOD(void);
#define JavaNetHttpURLConnection_HTTP_BAD_METHOD 405
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_BAD_METHOD, jint)

/*!
 @brief HTTP Status-Code 406: Not Acceptable.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_ACCEPTABLE(void);
#define JavaNetHttpURLConnection_HTTP_NOT_ACCEPTABLE 406
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_ACCEPTABLE, jint)

/*!
 @brief HTTP Status-Code 407: Proxy Authentication Required.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_PROXY_AUTH(void);
#define JavaNetHttpURLConnection_HTTP_PROXY_AUTH 407
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_PROXY_AUTH, jint)

/*!
 @brief HTTP Status-Code 408: Request Time-Out.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_CLIENT_TIMEOUT(void);
#define JavaNetHttpURLConnection_HTTP_CLIENT_TIMEOUT 408
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_CLIENT_TIMEOUT, jint)

/*!
 @brief HTTP Status-Code 409: Conflict.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_CONFLICT(void);
#define JavaNetHttpURLConnection_HTTP_CONFLICT 409
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_CONFLICT, jint)

/*!
 @brief HTTP Status-Code 410: Gone.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_GONE(void);
#define JavaNetHttpURLConnection_HTTP_GONE 410
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_GONE, jint)

/*!
 @brief HTTP Status-Code 411: Length Required.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_LENGTH_REQUIRED(void);
#define JavaNetHttpURLConnection_HTTP_LENGTH_REQUIRED 411
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_LENGTH_REQUIRED, jint)

/*!
 @brief HTTP Status-Code 412: Precondition Failed.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_PRECON_FAILED(void);
#define JavaNetHttpURLConnection_HTTP_PRECON_FAILED 412
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_PRECON_FAILED, jint)

/*!
 @brief HTTP Status-Code 413: Request Entity Too Large.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_ENTITY_TOO_LARGE(void);
#define JavaNetHttpURLConnection_HTTP_ENTITY_TOO_LARGE 413
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_ENTITY_TOO_LARGE, jint)

/*!
 @brief HTTP Status-Code 414: Request-URI Too Large.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_REQ_TOO_LONG(void);
#define JavaNetHttpURLConnection_HTTP_REQ_TOO_LONG 414
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_REQ_TOO_LONG, jint)

/*!
 @brief HTTP Status-Code 415: Unsupported Media Type.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_UNSUPPORTED_TYPE(void);
#define JavaNetHttpURLConnection_HTTP_UNSUPPORTED_TYPE 415
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_UNSUPPORTED_TYPE, jint)

/*!
 @brief HTTP Status-Code 500: Internal Server Error.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_SERVER_ERROR(void);
#define JavaNetHttpURLConnection_HTTP_SERVER_ERROR 500
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_SERVER_ERROR, jint)

/*!
 @brief HTTP Status-Code 500: Internal Server Error.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_INTERNAL_ERROR(void);
#define JavaNetHttpURLConnection_HTTP_INTERNAL_ERROR 500
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_INTERNAL_ERROR, jint)

/*!
 @brief HTTP Status-Code 501: Not Implemented.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_NOT_IMPLEMENTED(void);
#define JavaNetHttpURLConnection_HTTP_NOT_IMPLEMENTED 501
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_NOT_IMPLEMENTED, jint)

/*!
 @brief HTTP Status-Code 502: Bad Gateway.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_BAD_GATEWAY(void);
#define JavaNetHttpURLConnection_HTTP_BAD_GATEWAY 502
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_BAD_GATEWAY, jint)

/*!
 @brief HTTP Status-Code 503: Service Unavailable.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_UNAVAILABLE(void);
#define JavaNetHttpURLConnection_HTTP_UNAVAILABLE 503
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_UNAVAILABLE, jint)

/*!
 @brief HTTP Status-Code 504: Gateway Timeout.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_GATEWAY_TIMEOUT(void);
#define JavaNetHttpURLConnection_HTTP_GATEWAY_TIMEOUT 504
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_GATEWAY_TIMEOUT, jint)

/*!
 @brief HTTP Status-Code 505: HTTP Version Not Supported.
 */
inline jint JavaNetHttpURLConnection_get_HTTP_VERSION(void);
#define JavaNetHttpURLConnection_HTTP_VERSION 505
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetHttpURLConnection, HTTP_VERSION, jint)

FOUNDATION_EXPORT void JavaNetHttpURLConnection_initWithJavaNetURL_(JavaNetHttpURLConnection *self, JavaNetURL *u);

FOUNDATION_EXPORT void JavaNetHttpURLConnection_setFollowRedirectsWithBoolean_(jboolean set);

FOUNDATION_EXPORT jboolean JavaNetHttpURLConnection_getFollowRedirects(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetHttpURLConnection)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_JavaNetHttpURLConnection")
