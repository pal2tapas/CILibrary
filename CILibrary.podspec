Pod::Spec.new do |s|
s.name              = 'CILibrary'
s.version           = '1.0.0'
s.summary           = 'A library for internal use only.'
s.homepage          = 'https://github.com/pal2tapas/'

s.author            = { 'Tapas Pal' => 'pal2tapas@gmail.com' }
s.license           = { :type => 'Apache-2.0', :file => 'LICENSE' }

s.platform          = :ios
s.source            = { :http => 'https://github.com/pal2tapas/CILibrary/raw/master/CILibrary.zip' }

s.requires_arc      = true
s.ios.deployment_target = '10.0'
s.vendored_frameworks = 'CILibrary/CILibrary.framework'
end
