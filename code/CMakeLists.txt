set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "-Wall -fpermissive -g")
set(CMAKE_CXX_FLAGS "-Wall -g")
#set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -ldl")
#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,Release>/chapter06")

file(GLOB ENGINE_FILES

#Physics
${PROJECT_SOURCE_DIR}/code/Physics/Body.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Body.h
${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Broadphase.h
${PROJECT_SOURCE_DIR}/code/Physics/Constraints
${PROJECT_SOURCE_DIR}/code/Physics/Constraints.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Constraints.h
${PROJECT_SOURCE_DIR}/code/Physics/Contact.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Contact.h
${PROJECT_SOURCE_DIR}/code/Physics/GJK.cpp
${PROJECT_SOURCE_DIR}/code/Physics/GJK.h
${PROJECT_SOURCE_DIR}/code/Physics/Intersections.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Intersections.h
${PROJECT_SOURCE_DIR}/code/Physics/Manifold.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Manifold.h
${PROJECT_SOURCE_DIR}/code/Physics/Shapes
${PROJECT_SOURCE_DIR}/code/Physics/Shapes.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Shapes.h

#Physics/Shapes
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBase.h
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBox.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeBox.h
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeConvex.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeConvex.h
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.cpp
${PROJECT_SOURCE_DIR}/code/Physics/Shapes/ShapeSphere.h

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

#Math
${PROJECT_SOURCE_DIR}/code/Math/Bounds.cpp
${PROJECT_SOURCE_DIR}/code/Math/Bounds.h
${PROJECT_SOURCE_DIR}/code/Math/LCP.cpp
${PROJECT_SOURCE_DIR}/code/Math/LCP.h
${PROJECT_SOURCE_DIR}/code/Math/Matrix.h
${PROJECT_SOURCE_DIR}/code/Math/Quat.h
${PROJECT_SOURCE_DIR}/code/Math/Vector.h

${PROJECT_SOURCE_DIR}/code/application.cpp
${PROJECT_SOURCE_DIR}/code/application.h
${PROJECT_SOURCE_DIR}/code/Fileio.cpp
${PROJECT_SOURCE_DIR}/code/Fileio.h
${PROJECT_SOURCE_DIR}/code/Scene.cpp
${PROJECT_SOURCE_DIR}/code/Scene.h
${PROJECT_SOURCE_DIR}/code/main.cpp
)

add_executable (code_base ${ENGINE_FILES})
target_link_libraries(code_base 
  #Vulkan::Vulkan
  ${LIBS}
)
