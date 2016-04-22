Pod::Spec.new do |spec|
  #项目名称
  spec.name         = 'TGXSDK'
  #版本号
  spec.version      = '0.1.1'
  #开源协议
  spec.license      = { :"type" => "Copyright",
                         :"text" => " Copyright 2016 TGX \n"}
  #对开源项目的描述
  spec.summary      = 'TGX IOS PUSH SDK'
  #开源项目的首页
  spec.homepage     = 'https://github.com/zhuwh/TGX_IOS_SDK.git'
  #作者信息
  spec.author       = {'mark' => 'zhuwenhui5566@163.com'}
  #项目的源和版本号
  spec.source       = { :git => 'https://github.com/zhuwh/TGX_IOS_SDK.git', :tag => '0.1.1' }
  #源文件，这个就是供第三方使用的源文件
  spec.source_files = "**/include/**/*.h"
  spec.vendored_libraries = "**/lib#{spec.name}.a"
  #适用于ios7及以上版本
  spec.platform     = :ios, '7.0'
  #使用的是ARC
  spec.requires_arc = true
  spec.dependency 'Reachability'
  spec.dependency 'FMDB'
#  spec.dependency 'wax', :git=>'https://github.com/alibaba/wax.git'


end