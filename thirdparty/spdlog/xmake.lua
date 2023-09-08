package("spdlog")
    on_load(
        function (package) 
            package:set("installdir", os.scriptdir())
        end
    )
    on_fetch(
        function (package)
            local result = {}
            --result.links = "SDL2"
            --result.linkdirs = package:installdir("lib")
            result.includedirs = package:installdir("spdlog")
            return result
        end
    )