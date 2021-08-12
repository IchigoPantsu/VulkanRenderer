set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "-Wall -fpermissive -g")
#set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -ldl")
#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,Release>/chapter06")

file(GLOB BASE_CODE_PHYSICS
#Physics
#${PROJECT_SOURCE_DIR}/code/Physics/Body.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Body.h
#${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints.h
#${PROJECT_SOURCE_DIR}/code/Physics/Contact.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Contact.h
${PROJECT_SOURCE_DIR}/code/Physics/GJK.cpp
${PROJECT_SOURCE_DIR}/code/Physics/GJK.h
#${PROJECT_SOURCE_DIR}/code/Physics/Intersections.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Intersections.h
${PROJECT_SOURCE_DIR}/code/Physics/Manifold.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Manifold.h
${PROJECT_SOURCE_DIR}/code/Physics/Shapes.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Shapes.h
)

file(GLOB BASE_CODE_PHYSICS_SHAPES
#Physics/Shapes
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBase.h
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBox.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBox.h
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeConvex.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeConvex.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.h
)
file(GLOB BASE_CODE_PHYSICS_CONSTRAINTS
#Physics/Constraints
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintBase.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintConstantVelocity.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintConstantVelocity.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintDistance.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintDistance.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintHinge.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintHinge.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMotor.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMotor.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMover.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMover.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintOrientation.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintOrientation.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintPenetration.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintPenetration.h
)
file(GLOB BASE_CODE_RENDERER
#Renderer
${PROJECT_SOURCE_DIR}/code/Renderer/Buffer.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/Buffer.h
${PROJECT_SOURCE_DIR}/code/Renderer/Descriptor.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/Descriptor.h
${PROJECT_SOURCE_DIR}/code/Renderer/DeviceContext.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/DeviceContext.h
${PROJECT_SOURCE_DIR}/code/Renderer/Fence.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/Fence.h
${PROJECT_SOURCE_DIR}/code/Renderer/FrameBuffer.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/FrameBuffer.h
${PROJECT_SOURCE_DIR}/code/Renderer/Image.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/Image.h
${PROJECT_SOURCE_DIR}/code/Renderer/model.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/model.h
${PROJECT_SOURCE_DIR}/code/Renderer/OffscreenRenderer.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/OffscreenRenderer.h
${PROJECT_SOURCE_DIR}/code/Renderer/Pipeline.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/Pipeline.h
${PROJECT_SOURCE_DIR}/code/Renderer/Samplers.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/Samplers.h
${PROJECT_SOURCE_DIR}/code/Renderer/shader.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/shader.h
${PROJECT_SOURCE_DIR}/code/Renderer/SwapChain.cpp
${PROJECT_SOURCE_DIR}/code/Renderer/SwapChain.h
)
file(GLOB BASE_CODE_MATH
#Math
${PROJECT_SOURCE_DIR}/code/Math/Bounds.cpp
${PROJECT_SOURCE_DIR}/code/Math/Bounds.h
${PROJECT_SOURCE_DIR}/code/Math/LCP.cpp
${PROJECT_SOURCE_DIR}/code/Math/LCP.h
${PROJECT_SOURCE_DIR}/code/Math/Matrix.h
${PROJECT_SOURCE_DIR}/code/Math/Quat.h
${PROJECT_SOURCE_DIR}/code/Math/Vector.h
)

file(GLOB BASE_CODE
${PROJECT_SOURCE_DIR}/code/application.cpp
${PROJECT_SOURCE_DIR}/code/application.h
${PROJECT_SOURCE_DIR}/code/Fileio.cpp
${PROJECT_SOURCE_DIR}/code/Fileio.h
#${PROJECT_SOURCE_DIR}/code/Scene.cpp
#${PROJECT_SOURCE_DIR}/code/Scene.h
${PROJECT_SOURCE_DIR}/code/main.cpp
)
file(COPY ${BASE_CODE_PHYSICS} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book00/Physics)
file(COPY ${BASE_CODE_PHYSICS_CONSTRAINTS} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints)
file(COPY ${BASE_CODE_PHYSICS_SHAPES} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes)
file(COPY ${BASE_CODE_RENDERER} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book00/Renderer)
file(COPY ${BASE_CODE_MATH} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book00/Math)
file(COPY ${BASE_CODE} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book00)

file(GLOB ENGINE_FILES
#Physics
#${PROJECT_SOURCE_DIR}/code/Physics/Body.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Body.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Body.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Body.h
#${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Broadphase.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Broadphase.h
${PROJECT_SOURCE_DIR}/completed/Book00/Constraints.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Constraints.h
#${PROJECT_SOURCE_DIR}/code/Physics/Contact.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Contact.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Contact.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Contact.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/GJK.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/GJK.h
#${PROJECT_SOURCE_DIR}/code/Physics/Intersections.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Intersections.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Intersections.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Intersections.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Manifold.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Manifold.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes.h


#Physics/Shapes
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBase.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes/ShapeBase.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes/ShapeBox.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes/ShapeBox.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes/ShapeConvex.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes/ShapeConvex.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes/ShapeSphere.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes/ShapeSphere.h

#Physics/Constraints
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintBase.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintConstantVelocity.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintConstantVelocity.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintDistance.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintDistance.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintHinge.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintHinge.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintMotor.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintMotor.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintMover.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintMover.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintOrientation.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintOrientation.h
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintPenetration.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Constraints/ConstraintPenetration.h

#Renderer
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Buffer.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Buffer.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Descriptor.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Descriptor.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/DeviceContext.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/DeviceContext.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Fence.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Fence.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/FrameBuffer.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/FrameBuffer.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Image.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Image.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/model.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/model.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/OffscreenRenderer.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/OffscreenRenderer.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Pipeline.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Pipeline.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Samplers.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/Samplers.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/shader.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/shader.h
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/SwapChain.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Renderer/SwapChain.h

#Math
${PROJECT_SOURCE_DIR}/completed/Book00/Math/Bounds.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Math/Bounds.h
${PROJECT_SOURCE_DIR}/completed/Book00/Math/LCP.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Math/LCP.h
${PROJECT_SOURCE_DIR}/completed/Book00/Math/Matrix.h
${PROJECT_SOURCE_DIR}/completed/Book00/Math/Quat.h
${PROJECT_SOURCE_DIR}/completed/Book00/Math/Vector.h

${PROJECT_SOURCE_DIR}/completed/Book00/application.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/application.h
${PROJECT_SOURCE_DIR}/completed/Book00/Fileio.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Fileio.h
#${PROJECT_SOURCE_DIR}/completed/Book00/Scene.cpp
#${PROJECT_SOURCE_DIR}/completed/Book00/Scene.h
${PROJECT_SOURCE_DIR}/completed/Book00/Scene.cpp
${PROJECT_SOURCE_DIR}/completed/Book00/Scene.h
${PROJECT_SOURCE_DIR}/completed/Book00/main.cpp
)

add_executable (in_one_weekend ${ENGINE_FILES})

#インクルードディレクトリについて①カレントディレクトリを検索②インクルードオプションを検索③．．．
#なのでBody.hについて①の時点でcode/Physics/Body.hがApplication.hでインクルードされ，インクルードガードによって本来のインクルード対象であるcompleted/Book00/Physics/Body.hは無視される．
#その結果，Bodyが不正な型情報となりScene.cppでBodyを操作するとセグメンテーション違反で落ちる
#解決策はビルド時にファイルをコピーしてくるか,インクルードを"Physics/Body.h"-><Physics/Body.h>で書き換える？．．．
#target_include_directories(in_one_weekend PRIVATE
#  ${PROJECT_SOURCE_DIR}/completed/Book00/
#  ${PROJECT_SOURCE_DIR}/completed/Book00/Physics
#  ${PROJECT_SOURCE_DIR}/completed/Book00/Physics/Shapes
#  ${PROJECT_SOURCE_DIR}/code
#  ${PROJECT_SOURCE_DIR}/code/Math
#  ${PROJECT_SOURCE_DIR}/code/Renderer
#  ${PROJECT_SOURCE_DIR}/code/Physics
#  ${PROJECT_SOURCE_DIR}/code/Physics/Shapes
#  ${PROJECT_SOURCE_DIR}/code/Physics/Constraints
#)
target_link_libraries(in_one_weekend 
  #Vulkan::Vulkan
  ${LIBS}
)
