#pragma once
#include <vector>
namespace CLOSE_HASH
{
	enum State
	{
		EMPTY,  //空的
		EXIST,  //存在数据
		DELETE, //删除数据
	};
	template<class T>
	struct HashData
	{
		T _data;
		State _state; //状态

	};
	template<class K,class V>
	class HashTable 
	{
		typedef HashData<pair<K, V>> HashData;
	public:
		pair<HashData<K, V>, bool> Insert(const pair<K, V>& kv)
		{
			if (_datanum == _tables.size())
			{
				int newSize = _tables.size() == 0 ? 10 : _tables.size() * 2;
				HashData<K, V> newht;
				newht._tables.resize(newSize);
				for (size_t i = 0; i < newht.size(); i++)
				{
					if (newht.state == EXIST)
					{
						newht.Insert(_tables[i]._data);
					}
				}
				_tables.swap(newht._tables);
			}
			
		//pair<HashData<K,V>,bool> Insert(const pair<K, V>& kv)
		//{
		//	//考虑容量的问题
		//	if (_datanum == _table.size())
		//	{
		//		
		//		//就要进行增容
		//		size_t newSize = _tables.size() == 0 ? 10 : _table.size() * 2;
		//		vector<HashData> newtables;
		//		newtables.resize(newSize);
		//		for (size_t i = 0; i < _table.size(); ++i)
		//		{
		//			if (_tables[i]._state == EXIST)
		//			{
		//				size_t index = _tables[i]._data.first%newtables.size();
		//				while (newtables[index]._state == EXIST)
		//				{
		//					++index;
		//					if (index == newtable.size())
		//					{
		//						index = 0;
		//					}
		//				}
		//				newtables[index]._data = _tables[i]._data;
		//				newtables[index]._state = EXIST;
		//			}
		//		}
		//	
		//		_tables.swap(newtables);
		//	}
			size_t index = kv.first % _tables.size();
			//线性探测
			while (_tables[index]._state == EXIST)
			{
				if (kv == _tables.data.first)
				{
					return makepair(&_tables[index], false);
				}
				++index;
				if (index == _table.size())
				{
					index = 0;
				}
			}
			_tables[index]._data = kv;
			_tables[index]._state = EXIST;
			++_datanum;

			return makepair(&_tables[index],true);
		}

		HashData* Find(const K& key)
		{
			size_t index = key % _tables.size();
			while (_tables[index]._state != EMPTY)
			{
				if (_tables[index]._state == EXIST && _tables[index]._data.first == key)
				{
					return &_tables[index];
				}
				else
				{
					++index;
					if (index == _tables.size())
					{
						index = 0;
					}
				}
			}
			return nullptr;
		}
		void Erase(const K& key)
		{
			HashData* ret = Find(key);
			if (ret)
			{
				ret._state = DELETE;
			}
		}
		V& operator[](const K& key)
		{
			pair<HashData*, bool> ret = Insert(make_pair(key, V()));
			return ret.first->_data.second;
		}
	private:
		/*HashData* _tables;
		size_t size;
		size_t capacity;*/
		vector<HashData> _tables;
		size_t   _datanum=0;  //数据的数量

	};
}