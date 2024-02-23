function onCreate()
	makeLuaSprite('obj1','bambodi/3dBanbodi', -100, -350)
	addLuaSprite('obj1',false)
	setLuaSpriteScrollFactor('obj1', 0.1, 0.1)
local shadname = "stridentCrisisWavy"

	function onCreatePost()
		initLuaShader("stridentCrisisWavy")
		setSpriteShader('obj1', shadname)
	end
	
	function onUpdate(elapsed)
	setShaderFloat('obj1', 'uWaveAmplitude', 0.1)
	setShaderFloat('obj1', 'uFrequency', 5)
	setShaderFloat('obj1', 'uSpeed', 2)
		end

	function onUpdatePost(elapsed)
	setShaderFloat('obj1', 'uTime', os.clock())
	end
end

