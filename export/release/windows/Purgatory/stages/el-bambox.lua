function onCreate()
	makeLuaSprite('obj1','bambox/3dBambox',-400,-230)
	addLuaSprite('obj1',false)
    scaleObject('obj1',1.1,1.1)
	setScrollFactor('obj1', 0.1, 0.1)
end

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

