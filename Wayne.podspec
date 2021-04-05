Pod::Spec.new do |s|
s.name          = "Wayne"
s.version       = "1.0"
s.summary       = "This is a test KMP framework"
s.homepage      = "https://github.com/prof18/ccoca-repo-test"
s.license       = "Apache"
s.author        = { "Tom Wayne" => "pepa.hruska@gmail.com" }
s.vendored_frameworks = 'Wayne.framework'
s.source        = { :git => "git@github.com:TomWayne98/kmpCoco.git", :tag => "#{s.version}" }
s.exclude_files = "Classes/Exclude"
end