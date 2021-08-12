set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "-Wall -fpermissive -g")
set(CMAKE_CXX_FLAGS "-Wall -g")
#set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -ldl")
#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,Release>/chapter06")

file(GLOB BASE_CODE_PHYSICS
#Physics
#${PROJECT_SOURCE_DIR}/code/Physics/Body.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Body.h
#${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints.h
#${PROJECT_SOURCE_DIR}/code/Physics/Contact.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Contact.h
#${PROJECT_SOURCE_DIR}/code/Physics/GJK.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/GJK.h
#${PROJECT_SOURCE_DIR}/code/Physics/Intersections.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Intersections.h
#${PROJECT_SOURCE_DIR}/code/Physics/Manifold.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Manifold.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes.h
)
file(GLOB BASE_CODE_PHYSICS_SHAPES
#Physics/Shapes
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBase.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBox.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBox.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeConvex.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeConvex.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.h
)
file(GLOB BASE_CODE_PHYSICS_CONSTRAINTS
#Physics/Constraints
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintBase.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintConstantVelocity.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintConstantVelocity.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintDistance.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintDistance.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintHinge.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintHinge.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMotor.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMotor.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMover.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMover.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintOrientation.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintOrientation.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintPenetration.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintPenetration.h
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
file(COPY ${BASE_CODE_PHYSICS} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book02/Physics)
file(COPY ${BASE_CODE_PHYSICS_CONSTRAINTS} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints)
file(COPY ${BASE_CODE_PHYSICS_SHAPES} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes)
file(COPY ${BASE_CODE_RENDERER} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book02/Renderer)
file(COPY ${BASE_CODE_MATH} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book02/Math)
file(COPY ${BASE_CODE} DESTINATION ${PROJECT_SOURCE_DIR}/completed/Book02)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "-Wall -fpermissive -g")
set(CMAKE_CXX_FLAGS "-Wall -g")
#set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -ldl")
#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,Release>/chapter06")

file(GLOB ENGINE_FILES

#Physics
#${PROJECT_SOURCE_DIR}/code/Physics/Body.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Body.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Body.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Body.h
#${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Broadphase.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Broadphase.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints.h
#${PROJECT_SOURCE_DIR}/code/Physics/Contact.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Contact.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Contact.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Contact.h
#${PROJECT_SOURCE_DIR}/code/Physics/GJK.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/GJK.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/GJK.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/GJK.h
#${PROJECT_SOURCE_DIR}/code/Physics/Intersections.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Intersections.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Intersections.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Intersections.h
#${PROJECT_SOURCE_DIR}/code/Physics/Manifold.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Manifold.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Manifold.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Manifold.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes.h

#Physics/Shapes
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBase.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes/ShapeBase.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBox.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBox.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes/ShapeBox.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes/ShapeBox.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeConvex.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeConvex.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes/ShapeConvex.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes/ShapeConvex.h
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes/ShapeSphere.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Shapes/ShapeSphere.h

#Physics/Constraints
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintBase.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintBase.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintConstantVelocity.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintConstantVelocity.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintConstantVelocity.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintConstantVelocity.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintDistance.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintDistance.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintDistance.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintDistance.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintHinge.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintHinge.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintHinge.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintHinge.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMotor.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMotor.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintMotor.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintMotor.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMover.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintMover.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintMover.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintMover.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintOrientation.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintOrientation.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintOrientation.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintOrientation.h
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintPenetration.cpp
#${PROJECT_SOURCE_DIR}/code/Physics/Constraints/ConstraintPenetration.h
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintPenetration.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Physics/Constraints/ConstraintPenetration.h

#Renderer
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Buffer.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Buffer.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Descriptor.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Descriptor.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/DeviceContext.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/DeviceContext.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Fence.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Fence.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/FrameBuffer.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/FrameBuffer.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Image.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Image.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/model.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/model.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/OffscreenRenderer.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/OffscreenRenderer.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Pipeline.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Pipeline.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Samplers.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/Samplers.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/shader.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/shader.h
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/SwapChain.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Renderer/SwapChain.h

#Math
${PROJECT_SOURCE_DIR}/completed/Book02/Math/Bounds.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Math/Bounds.h
${PROJECT_SOURCE_DIR}/completed/Book02/Math/LCP.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Math/LCP.h
${PROJECT_SOURCE_DIR}/completed/Book02/Math/Matrix.h
${PROJECT_SOURCE_DIR}/completed/Book02/Math/Quat.h
${PROJECT_SOURCE_DIR}/completed/Book02/Math/Vector.h
${PROJECT_SOURCE_DIR}/completed/Book02/application.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/application.h
${PROJECT_SOURCE_DIR}/completed/Book02/Fileio.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Fileio.h
#${PROJECT_SOURCE_DIR}/code/Scene.cpp
#${PROJECT_SOURCE_DIR}/code/Scene.h
${PROJECT_SOURCE_DIR}/completed/Book02/Scene.cpp
${PROJECT_SOURCE_DIR}/completed/Book02/Scene.h
${PROJECT_SOURCE_DIR}/completed/Book02/main.cpp
)

add_executable (rest_of_your_life ${ENGINE_FILES})
target_link_libraries(rest_of_your_life 
  #Vulkan::Vulkan
  ${LIBS}
)
