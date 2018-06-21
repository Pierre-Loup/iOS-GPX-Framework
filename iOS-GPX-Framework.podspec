Pod::Spec.new do |s|
  s.name         = "iOS-GPX-Framework"
  s.version      = "0.0.5"
  s.summary      = "The iOS framework for parsing/generating GPX files. (@merlos fork)"
  s.description  = <<-DESC
                   This is a iOS framework for parsing/generating GPX files.
                   This Framework parses the GPX from a URL or Strings and create Objective-C Instances of GPX structure.
                   DESC
  s.homepage     = "https://github.com/merlos/iOS-GPX-Framework."
  s.screenshots  = "http://gpxframework.com/img/gpx_viewer.png", "http://gpxframework.com/img/gpx_logger.png"
  s.license      = 'MIT'
  s.author       = { "Watanabe Toshinori" => "t@flcl.jp", "Juan M. Merlos" => '' }
  s.source       = { :git => "https://github.com/merlos/iOS-GPX-Framework.git", :tag => s.version.to_s  }

  s.platform     = :ios
  s.ios.deployment_target = '6.0'
  s.requires_arc = true

  s.xcconfig = {
      'USER_HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/iOS-GPX-Framework/GPX"'
    }

  s.source_files = 'GPX'
  s.ios.framework = 'UIKit'
  s.dependency 'TBXML', '~> 1.5'
end
