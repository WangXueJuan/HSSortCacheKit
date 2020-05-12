#
#  Be sure to run `pod spec lint HSSortCacheKit.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "HSSortCacheKit"
  spec.version      = "0.0.2"
  spec.summary      = "分类存储数据，支持多种缓存方案，NSUserDefaults、File文件存储、memory存储"
  spec.description  = <<-DESC
                      可以实现按组存储数据，方便读取，缓存、删除等操作，统一存储入口，方便用户管理本地缓存数据，接入简单，操作简单
                   DESC

  spec.homepage     = "https://github.com/WangXueJuan/HSSortCacheKit"
  spec.license      = "MIT"
  spec.author             = { "王雪娟" => "wangxuejuan0811@rayootech.com" }
  spec.source       = { :git => "https://github.com/WangXueJuan/HSSortCacheKit.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = "HSSortCacheKit.framework"

  spec.requires_arc = true
end
