Pod::Spec.new do |s|
   s.name         = "DFImageManager"
   s.version      = "0.0.2"
   s.summary      = "Complete solution for fetching, caching and adjusting images"
   s.homepage     = "https://github.com/kean/DFImageManager"
   s.license      = { :type => "MIT", :file => "LICENSE" }
   s.author             = { "Alexander Grebenyuk" => "grebenyuk.alexander@gmail.com" }
   s.social_media_url   = "https://www.facebook.com/agrebenyuk"
   s.platform     = :ios
   s.ios.deployment_target = "6.0"
   s.source       = { :git => "https://github.com/kean/DFImageManager.git", :tag => s.version.to_s }
   s.source_files  = "DFImageManager/DFImageManager/**/*.{h,m}"
   s.requires_arc = true

   s.dependency "DFCache", "~> 1.0"
end