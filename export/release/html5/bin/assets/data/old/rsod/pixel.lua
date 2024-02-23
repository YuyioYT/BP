local shadname = "pixel"

function onCreatePost()
        initLuaShader(shadname)
    
    makeLuaSprite("pixelshader")
    makeGraphic("pixelshader", screenWidth, screenHeight)
    setSpriteShader("pixelshader", shadname)

        addHaxeLibrary("ShaderFilter", "openfl.filters")

        runHaxeCode([[
        trace(ShaderFilter);
      game.camGame.setFilters([new ShaderFilter(game.getLuaObject("pixelshader").shader)]);
      game.camHUD.setFilters([new ShaderFilter(game.getLuaObject("pixelshader").shader)]);
    ]])
    
end

local vals = 0.003 -- Initial value, change this as needed
local targetValue = 1 -- The value to which you want to increment "vals"
local increment = 0.4 -- The amount by which "vals" will increment on each update

function onUpdate(elapsed)
    if vals <= targetValue then
        vals = vals + increment
    end

    setShaderFloat("pixelshader", "Pixelly", vals)
end