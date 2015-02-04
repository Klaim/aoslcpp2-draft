
// AOSL Model

namespace aosl
{
	template< class T >
	class ID
	{

	};

	template< class T >
	class Ref
	{

	};

	class Resource
	{
		ID<Resource> id;

	};

	class Library
	{
		vector<Resource> resources;
	};

	class GraphicProperties
	{

	};

	class AudioProperties
	{

	};

	class StreamProperties
	{

	};

	using ObjectType = variant< Sprite, Video, ... >;

	class Object
	{
		ID<Object> id;
		Ref<Resource> source;
		ObjectType type;
	};

	class Change
	{

	};


	class Node
	{

	};

	class Transition
	{
		vector<Ref<Node>> nodes_from;
		vector<Ref<Node>> nodes_to;


	};

	class Navigation
	{

	};

	class StoryGraph
	{
		Navigation default_navigation;
		vector<Node> nodes;
		vector<Transition> transitions;
	};

	class Sequence
	{

	};


}



