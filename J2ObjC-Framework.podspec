@version = "2.5.6"

Pod::Spec.new do |s|
  s.name = "J2ObjC-Framework"
  s.version = @version
  s.summary = "Frameworked version of J2ObjC"
  s.homepage = "https://actor.im/"
  s.license = { :type => 'MIT', :file => 'LICENSE' }
  s.author = { "Actor LLC" => "steve@actor.im" }
  s.source = { :git => "https://github.com/jaspervp/J2ObjC-Framework.git", :tag => "v#{s.version}" }

  s.ios.deployment_target = "12.0"
  s.osx.deployment_target = "10.15"
  s.tvos.deployment_target = "12.0"
  s.requires_arc = true

  s.frameworks = 'Security'
  s.libraries = 'icucore', 'z', 'iconv'

  s.prepare_command = <<-CMD
      Scripts/download.sh
  CMD

  s.vendored_frameworks = 'Frameworks/JRE.xcframework', 'Frameworks/JSR305.xcframework', 'Frameworks/ProtobufRuntime.xcframework'

end
